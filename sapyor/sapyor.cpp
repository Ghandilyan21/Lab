#include <iostream>
void set_mines(char** mat, int h, int w, int mine_count)
{
    srand(time(nullptr));
    int count{};
    while (count != mine_count)
    {
        int ix = rand() % h;
        int jx = rand() % w;
        if (mat[ix][jx] != 'm')
        {
            mat[ix][jx] = 'm';
            ++count;
        }
    }
}
void set_default(char** mat, int h, int w)
{
    for (int i = 0; i < h; ++i)
    {
        for (int j = 0; j < w; ++j)
        {
                mat[i][j] = '0';
        }
    }
}

int set_count(char** mat, int h, int w, int i, int j)
{
    if (i < 0 || i >= h)
    {
        return 0;
    }
    if (j < 0 || j >= w)
    {
        return 0;
    }
    if (mat[i][j] != 'm' && mat[i][j] != 'n')
    {
        return 0;
    }
    if (mat[i][j] == 'm')
    {
        return 1;
    }
    return set_count(mat, h, w, i - 1, j) + set_count(mat, h, w, i - 1, j + 1)
        + set_count(mat, h, w, i, j + 1) + set_count(mat, h, w, i + 1, j + 1) 
        + set_count(mat, h, w, i + 1, j) + set_count(mat, h, w, i + 1, j - 1)  
        + set_count(mat, h, w, i, j - 1) + set_count(mat, h, w, i - 1, j - 1);
}

void set_field(char** mat, int h, int w, int mine_count)
{
    set_mines(mat, h, w, mine_count);
    for (int i = 0; i < h; ++i)
    {
        for (int j = 0; j < w; ++j)
        {
            if (mat[i][j] == 0)
            {
                mat[i][j] = 'n';
                mat[i][j] = (char)(set_count(mat, h, w, i, j) + '0');
            } 
        }
    }
}
void print_field(char** mat, int h, int w)
{
    for (int i = 0; i < h; ++i)
    {
        for (int j = 0; j < w; ++j)
        {
            std::cout << mat[i][j] << " ";
        }
        std::cout << std::endl;
    }
    
}
void open_fields(char** mat, int h, int w, int i, int j, char** res_mat)
{
    if (i < 0 || i >= h)
    {
        return;
    }
    if (j < 0 || j >= w)
    {
        return;
    }
    // if (mat[i][j] != 'm' && mat[i][j] != 'k')
    // {
    //     res_mat[i][j] = mat[i][j];
    //     return;
    // }
    if (mat[i][j] != 0)
    {
        res_mat[i][j] = mat[i][j]; //      -----------------stex xndir ka
        return;
    }
    if (mat[i][j] == 'm')
    {
        return;
    }
    //res_mat[i][j] = '0';
    open_fields(mat, h, w, i - 1, j + 1, res_mat);
    open_fields(mat, h, w, i - 1, j, res_mat);
    open_fields(mat, h, w, i, j + 1, res_mat);
    open_fields(mat, h, w, i + 1, j + 1, res_mat); 
    open_fields(mat, h, w, i + 1, j, res_mat);
    open_fields(mat, h, w, i + 1, j - 1, res_mat);
    open_fields(mat, h, w, i, j - 1, res_mat);
    open_fields(mat, h, w, i - 1, j - 1, res_mat);
    
}
int main(int argc, char const *argv[])
{
    int height{};
    int width{};
    int mine_count{};
    std::cout << "Enter the height : ";
    std::cin >> height;
    std::cout << "Enter the width : ";
    std::cin >> width;
    std::cout << "Enter the count of mine : ";
    std::cin >> mine_count;
    char** mat = new char*[height];
    for (int i = 0; i < width; ++i)
    {
        mat[i] = new char[width];
    }
    char** res_mat = new char*[height]{};
    for (int i = 0; i < width; ++i)
    {
        res_mat[i] = new char[width];
    }
    set_default(res_mat, height, width);
    //set_mines(mat, height, width, mine_count);
    set_field(mat,height,width,mine_count);
    print_field(mat, height, width);
    std::cout << std::endl;


    int tmp_i{};
    int tmp_j{};
    std::cout << "Enter the i index : ";
    std::cin >> tmp_i;
    std::cout << "Enter the j index : ";
    std::cin >> tmp_j;


     for (int i = 0; i < height; ++i)
   {
       for (int j = 0; j < width; ++j)
       {
           if (mat[tmp_i][tmp_j] != 'm')
           {
                // char tmp = mat[i][j];
                // mat[i][j] = 'n';
                open_fields(mat, height, width, tmp_i, tmp_j, res_mat);
                // mat[i][j] = tmp;
           }
           
       }
   }
   print_field(res_mat, height, width);



    // jnjel memory leaky
    for (int i = 0; i < height; ++i)
    {
        delete[] mat[i];
        delete[] res_mat[i];
    }
    delete[] mat;
    delete[] res_mat;
    return 0;
}
