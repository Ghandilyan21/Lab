"""Builds the short Arivo loading animation as a Lottie JSON file.

Usage: python3 build_lottie.py <path-to-Manrope-Medium.ttf> <out-dir>
Writes arivo-loading.json and arivo-loading-preview.html into <out-dir>.
The tagline is converted to vector shapes, so the Lottie needs no fonts.
"""
import json, math, sys
from fontTools.ttLib import TTFont
from fontTools.pens.basePen import BasePen

FPS, DUR = 60, 2.0
W, H = 1080, 1920
OP = int(FPS * DUR)

def hexc(h, a=1):
    h = h.lstrip('#')
    return [int(h[i:i + 2], 16) / 255 for i in (0, 2, 4)] + [a]

CREAM, APRICOT, TAG = hexc('#FFF3E6'), hexc('#F08A3C'), hexc('#C9A88F')

# --- keyframes -------------------------------------------------------------
EASE = {'io': (0.65, 0, 0.35, 1), 'out': (0.33, 1, 0.68, 1), 'lin': (0, 0, 1, 1)}

def fr(t):
    return round(t * FPS, 3)

def anim(keys, spatial=False, tangents=None):
    """keys: list of (time_s, value, ease_to_next). value may be number or list."""
    out = []
    for n, (t, v, e) in enumerate(keys):
        v = v if isinstance(v, list) else [v]
        k = {'t': fr(t), 's': v}
        if n < len(keys) - 1:
            x1, y1, x2, y2 = EASE[e]
            if spatial:
                k['o'] = {'x': x1, 'y': y1}; k['i'] = {'x': x2, 'y': y2}
            else:
                d = len(v)
                k['o'] = {'x': [x1] * d, 'y': [y1] * d}; k['i'] = {'x': [x2] * d, 'y': [y2] * d}
            if spatial:
                to, ti = (tangents or {}).get(n, ([0, 0, 0], [0, 0, 0]))
                k['to'], k['ti'] = to, ti
        out.append(k)
    return {'a': 1, 'k': out}

def static(v):
    return {'a': 0, 'k': v}

# --- shape helpers ---------------------------------------------------------
def tr():
    return {'ty': 'tr', 'p': static([0, 0]), 'a': static([0, 0]), 's': static([100, 100]),
            'r': static(0), 'o': static(100), 'sk': static(0), 'sa': static(0), 'nm': 'Transform'}

def group(items, nm='g'):
    return {'ty': 'gr', 'nm': nm, 'it': items + [tr()]}

def ellipse(size, pos=None):
    return {'ty': 'el', 'd': 1, 'nm': 'Ellipse',
            'p': pos if pos else static([0, 0]),
            's': size if isinstance(size, dict) else static(size)}

def path(v, i=None, o=None, closed=False):
    z = [[0, 0]] * len(v)
    return {'ty': 'sh', 'nm': 'Path', 'ks': static({'v': v, 'i': i or z, 'o': o or z, 'c': closed})}

def stroke(color, width, opacity=None):
    return {'ty': 'st', 'nm': 'Stroke', 'c': static(color), 'o': opacity or static(100),
            'w': width if isinstance(width, dict) else static(width), 'lc': 2, 'lj': 2, 'ml': 4}

def fill(color):
    return {'ty': 'fl', 'nm': 'Fill', 'c': static(color), 'o': static(100), 'r': 1}

def radial(center, radius, stops, alphas):
    flat = [x for off, c in stops for x in [off] + c[:3]]
    flat += [x for off, a in alphas for x in (off, a)]
    return {'ty': 'gf', 'nm': 'Gradient', 'o': static(100), 'r': 1, 't': 2,
            's': static(center), 'e': static([center[0] + radius, center[1]]),
            'h': static(0), 'a': static(0), 'g': {'p': len(stops), 'k': static(flat)}}

def trim(end, offset):
    return {'ty': 'tm', 'nm': 'Trim', 's': static(0), 'e': end, 'o': offset, 'm': 1}

def layer(ind, nm, shapes, p=(0, 0), s=None, o=None, pos=None):
    return {'ddd': 0, 'ind': ind, 'ty': 4, 'nm': nm, 'sr': 1, 'ao': 0, 'bm': 0,
            'ip': 0, 'op': OP, 'st': 0, 'shapes': shapes,
            'ks': {'o': o or static(100), 'r': static(0),
                   'p': pos or static([p[0], p[1], 0]), 'a': static([0, 0, 0]),
                   's': s or static([100, 100, 100])}}

# --- geometry (same as the logo, wordmark scaled 2.4x) -----------------------
S, TX, TY = 2.4, 195.6, 732
O = (TX + 257 * S, TY + 70 * S, 23 * S, 14 * S)          # final "o": x, y, r, stroke
IDOT = (TX + 132 * S, TY + 22 * S, 9 * S)                 # final i-dot: x, y, r
L0 = (540, 900, 120, 36)                                  # starting loop
DOT_R = 34
gap = (L0[0] + L0[2] * math.cos(math.radians(-65)), L0[1] + L0[2] * math.sin(math.radians(-65)))

layers = []

# tagline as vector outlines --------------------------------------------------
class LottiePen(BasePen):
    def __init__(self, gs, sc, ox, oy):
        super().__init__(gs); self.sc, self.ox, self.oy = sc, ox, oy; self.contours = []
    def P(self, p):
        return [self.ox + p[0] * self.sc, self.oy - p[1] * self.sc]
    def _moveTo(self, p):
        self.cur = {'v': [self.P(p)], 'i': [[0, 0]], 'o': [[0, 0]]}
    def _lineTo(self, p):
        c = self.cur; c['v'].append(self.P(p)); c['i'].append([0, 0]); c['o'].append([0, 0])
    def _curveToOne(self, p1, p2, p3):
        c = self.cur; a, b, e = self.P(p1), self.P(p2), self.P(p3); s = c['v'][-1]
        c['o'][-1] = [a[0] - s[0], a[1] - s[1]]
        c['v'].append(e); c['i'].append([b[0] - e[0], b[1] - e[1]]); c['o'].append([0, 0])
    def _qCurveToOne(self, p1, p2):
        s = self._getCurrentPoint()
        c1 = (s[0] + 2 / 3 * (p1[0] - s[0]), s[1] + 2 / 3 * (p1[1] - s[1]))
        c2 = (p2[0] + 2 / 3 * (p1[0] - p2[0]), p2[1] + 2 / 3 * (p1[1] - p2[1]))
        self._curveToOne(c1, c2, p2)
    def _closePath(self):
        c = self.cur
        if len(c['v']) > 1 and all(abs(a - b) < 1e-6 for a, b in zip(c['v'][0], c['v'][-1])):
            c['i'][0] = c['i'][-1]; c['v'].pop(); c['i'].pop(); c['o'].pop()
        self.contours.append(c)
    _endPath = _closePath

def text_shapes(font_path, text, size, tracking, cx, baseline):
    f = TTFont(font_path); gs = f.getGlyphSet(); cmap = f.getBestCmap()
    upm = f['head'].unitsPerEm; sc = size / upm; hmtx = f['hmtx']
    names = [cmap[ord(ch)] for ch in text]
    width = sum(hmtx[n][0] * sc for n in names) + tracking * (len(names) - 1)
    x = cx - width / 2; items = []
    for n in names:
        pen = LottiePen(gs, sc, x, baseline); gs[n].draw(pen)
        items += [path(c['v'], c['i'], c['o'], True) for c in pen.contours]
        x += hmtx[n][0] * sc + tracking
    return items

FONT, OUT = sys.argv[1], sys.argv[2]
tag_items = text_shapes(FONT, 'Come, and come back.', 46, 1.5, 540, 1088)
layers.append(layer(1, 'Tagline', [group(tag_items + [fill(TAG)], 'Text')],
    o=anim([(1.30, 0, 'out'), (1.80, 100, 'out')]),
    pos=anim([(1.30, [0, 18, 0], 'out'), (1.80, [0, 0, 0], 'out')])))

# the dot: arrives in the gap, then hops onto the "i" ---------------------------
ctrl = ((gap[0] + IDOT[0]) / 2, min(gap[1], IDOT[1]) - 220)
to = [2 / 3 * (ctrl[0] - gap[0]), 2 / 3 * (ctrl[1] - gap[1]), 0]
ti = [2 / 3 * (ctrl[0] - IDOT[0]), 2 / 3 * (ctrl[1] - IDOT[1]), 0]
k = IDOT[2] / DOT_R * 100
dot_shapes = [
    group([ellipse([DOT_R * 5.2] * 2),
           radial([0, 0], DOT_R * 2.6, [(0, APRICOT), (1, APRICOT)], [(0, 0.45), (1, 0)])], 'Glow'),
    group([ellipse([DOT_R * 2] * 2), fill(APRICOT)], 'Dot'),
]
layers.append(layer(2, 'Dot', dot_shapes,
    pos=anim([(0.45, [gap[0], gap[1] - 110, 0], 'out'), (0.75, [gap[0], gap[1], 0], 'io'),
              (0.82, [gap[0], gap[1], 0], 'io'), (1.30, [IDOT[0], IDOT[1], 0], 'io')],
             spatial=True, tangents={2: (to, ti)}),
    s=anim([(0.45, [0, 0, 100], 'out'), (0.64, [115, 115, 100], 'io'), (0.76, [100, 100, 100], 'io'),
            (0.82, [100, 100, 100], 'io'), (1.30, [k, k, 100], 'out'),
            (1.36, [k * 1.22, k * 0.8, 100], 'out'), (1.47, [k, k, 100], 'out')]),
    o=anim([(0.45, 0, 'lin'), (0.55, 100, 'lin')])))

# ripples --------------------------------------------------------------------
def ripple(ind, t0, dur, xy, r0, r1, w):
    return layer(ind, f'Ripple {ind}', [group([
        ellipse(anim([(t0, [r0 * 2, r0 * 2], 'out'), (t0 + dur, [r1 * 2, r1 * 2], 'out')])),
        stroke(APRICOT, w)], 'Ring')], p=xy,
        o=anim([(0, 0, 'lin'), (t0 - 0.001, 0, 'lin'), (t0, 70, 'out'), (t0 + dur, 0, 'out')]))

layers.append(ripple(3, 1.30, 0.45, IDOT[:2], IDOT[2], 80, 4))
layers.append(ripple(4, 0.62, 0.55, gap, DOT_R, 150, 6))

# the loop: draws itself, then becomes the "o" -----------------------------------
# Lottie ellipses start at 12 o'clock, so trim offset = SVG angle + 90.
loop = group([
    ellipse(anim([(0.75, [L0[2] * 2] * 2, 'io'), (1.25, [O[2] * 2] * 2, 'io')]),
            pos=anim([(0.75, [L0[0], L0[1]], 'io'), (1.25, [O[0], O[1]], 'io')])),
    stroke(CREAM, anim([(0.75, L0[3], 'io'), (1.25, O[3], 'io')])),
    trim(anim([(0.05, 0, 'io'), (0.55, 75, 'io'), (0.75, 75, 'io'), (1.25, 100, 'io')]),
         anim([(0.05, 30, 'io'), (0.55, 70, 'io'), (0.75, 70, 'io'), (1.25, 25, 'io')])),
], 'Loop')
layers.append(layer(5, 'Loop', [loop]))

# letters a, r, i, v -----------------------------------------------------------
k12 = 12.7
letters = [
    ('a', [ellipse([46, 46], static([30, 70])), path([[53, 47], [53, 93]])]),
    ('r', [path([[81, 93], [81, 70], [104, 47]], i=[[0, 0], [0, 0], [-k12, 0]], o=[[0, 0], [0, -k12], [0, 0]])]),
    ('i', [path([[132, 47], [132, 93]])]),
    ('v', [path([[160, 47], [183, 93], [206, 47]])]),
]
for n, (nm, items) in enumerate(letters):
    t0 = 0.95 + n * 0.07
    layers.append(layer(6 + n, f'Letter {nm}', [group(items + [stroke(CREAM, 14)], nm)],
        s=static([S * 100, S * 100, 100]),
        pos=anim([(t0, [TX, TY + 30, 0], 'out'), (t0 + 0.38, [TX, TY, 0], 'out')]),
        o=anim([(t0, 0, 'out'), (t0 + 0.38, 100, 'out')])))

# halo + background --------------------------------------------------------------
layers.append(layer(10, 'Halo', [group([ellipse([760, 760]),
    radial([0, 0], 380, [(0, APRICOT), (1, APRICOT)], [(0, 0.32), (1, 0)])], 'Halo')],
    pos=anim([(0.75, [L0[0], L0[1], 0], 'io'), (1.25, [O[0], O[1], 0], 'io')]),
    s=anim([(0.75, [100, 100, 100], 'io'), (1.25, [70, 70, 100], 'io')]),
    o=anim([(0.05, 0, 'out'), (0.5, 100, 'out')])))

bg_grad = radial([540, 900], 1150, [(0, hexc('#3B2A1F')), (0.55, hexc('#22170F')), (1, hexc('#130D09'))],
                 [(0, 1), (1, 1)])
layers.append(layer(11, 'Background', [group([
    {'ty': 'rc', 'nm': 'Rect', 'd': 1, 'p': static([540, 960]), 's': static([W, H]), 'r': static(0)},
    bg_grad], 'Background')]))
layers.append(layer(12, 'Base', [group([
    {'ty': 'rc', 'nm': 'Rect', 'd': 1, 'p': static([540, 960]), 's': static([W, H]), 'r': static(0)},
    fill(hexc('#130D09'))], 'Base')]))

anim_json = {'v': '5.12.2', 'fr': FPS, 'ip': 0, 'op': OP, 'w': W, 'h': H,
             'nm': 'Arivo loading', 'ddd': 0, 'assets': [], 'layers': layers}

def rnd(o):
    if isinstance(o, float): return round(o, 3)
    if isinstance(o, list): return [rnd(x) for x in o]
    if isinstance(o, dict): return {k: rnd(v) for k, v in o.items()}
    return o

data = json.dumps(rnd(anim_json), separators=(',', ':'))
open(f'{OUT}/arivo-loading.json', 'w').write(data)
open(f'{OUT}/arivo-loading-preview.html', 'w').write(f'''<!doctype html>
<html lang="en"><head><meta charset="utf-8"><meta name="viewport" content="width=device-width, initial-scale=1">
<title>Arivo Loading</title>
<style>html,body{{margin:0;height:100%;background:#130D09}}body{{display:flex;align-items:center;justify-content:center}}
#a{{height:100vh;max-width:100vw;aspect-ratio:9/16;cursor:pointer}}</style></head>
<body><div id="a" title="Click to replay"></div>
<script src="https://cdnjs.cloudflare.com/ajax/libs/lottie-web/5.12.2/lottie.min.js"></script>
<script>
const anim = lottie.loadAnimation({{container: document.getElementById('a'), renderer: 'svg', loop: false, autoplay: true, animationData: {data}}});
document.getElementById('a').addEventListener('click', () => anim.goToAndPlay(0, true));
</script></body></html>''')
print('frames', OP, 'bytes', len(data))
