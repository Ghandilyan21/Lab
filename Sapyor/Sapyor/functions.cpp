#include "functions.hpp"

void set_mines(char** mat, int h, int w, int mine_count)
{
	srand(static_cast<unsigned int>(time(nullptr)));
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
			mat[i][j] = '#';
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
			if (mat[i][j] != 'm')
			{
				mat[i][j] = 'n';
				mat[i][j] = (char)(set_count(mat, h, w, i, j) + '0');
			}
		}
	}
}

void print_field(char** mat, int h, int w, bool win = true)
{
	std::cout << std::endl << std::setw(166) << std::right << " ";
	for (int i = 0; i < w; ++i)
	{
		std::cout << "\033[1;32m";
		std::cout << std::setw(4) << std::left << i;
		std::cout << "\033[1;0m";
	}
	std::cout << std::endl;
	std::cout << std::setw(166) << std::right << " ";
	for (int i = 0; i < w; ++i)
	{
		std::cout << "\033[1;32m";
		std::cout << std::setw(4) << std::left << "_";
		std::cout << "\033[1;0m";
	}
	std::cout << std::endl;
	std::cout << std::setw(160) << std::right << " ";
	for (int i = 0; i < h; ++i)
	{	
		std::cout << "\033[1;32m";
		std::cout << std::setw(3) << std::left << i << "|  ";
		std::cout << "\033[1;0m";
		for (int j = 0; j < w; ++j)
		{
			if (mat[i][j] == 'm' && !win)
			{
				std::cout << "\033[1;31m";
			}
			else if (mat[i][j] == 'm' && win)
			{
				std::cout << "\033[1;32m";
			}
			else if (mat[i][j] != 'm' && mat[i][j] != '#')
			{
				std::cout << "\033[1;32m";
			}
			else
			{	
				std::cout << "\033[1;34m";
			}
			std::cout << std::setw(4) << std::left << mat[i][j];
			std::cout << "\033[1;0m";
		}
		std::cout << std::endl;
		std::cout << std::setw(160) << std::right << " ";
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
	if (mat[i][j] == 'm' || mat[i][j] == 'k')
	{
		return;
	}
	if (mat[i][j] >= '1' && mat[i][j] <= '9') {
		res_mat[i][j] = mat[i][j];
		mat[i][j] = 'k';
		return;
	}
	mat[i][j] = 'k';
	res_mat[i][j] = ' ';
	open_fields(mat, h, w, i - 1, j, res_mat);
	open_fields(mat, h, w, i, j + 1, res_mat);
	open_fields(mat, h, w, i + 1, j, res_mat);
	open_fields(mat, h, w, i, j - 1, res_mat);
}

char** set_mat(int h, int w, int mine_count)
{
	char** mat = new char* [h];
	for (int i = 0; i < w; ++i)
	{
		mat[i] = new char[w];
	}
	set_field(mat, h, w, mine_count);
	return mat;
}

char** set_default_mat(int h, int w)
{
	char** mat = new char* [h];
	for (int i = 0; i < w; ++i)
	{
		mat[i] = new char[w];
	}
	set_default(mat, h, w);
	print_field(mat, h, w);
	std::cout << std::endl;
	return mat;
}

void start(char** mat, int tmp_i, int tmp_j, int height, int width, char** res_mat, int& count)
{
	open_fields(mat, height, width, tmp_i, tmp_j, res_mat);
	for (int i = 0; i < height; ++i)
	{
		for (int j = 0; j < width; ++j)
		{
			if (res_mat[i][j] == '#')
			{
				++count;
			}
		}
	}
	std::cout << std::endl;
	print_field(res_mat, height, width);
}

void delete_mat(char**& mat, int h)
{
	for (int i = 0; i < h; ++i)
	{
		delete[] mat[i];
	}
	delete[] mat;
	mat = nullptr; 
}

void won(char** mat, int h, int w, char** res_mat)
{
	std::cout << "\033[1;31m" << std::endl;
	std::cout << std::setw(185) << std::right << "You lose..." << std::endl;
	std::cout << std::setw(186) << std::right << "Try again!\n\n"; 
	std::cout << "\033[1;0m";
	for (int i = 0; i < h; ++i)
	{
		for (int j = 0; j < w; ++j)
		{
			if (mat[i][j] == 'm')
			{
				res_mat[i][j] = mat[i][j];
			}
			else if (mat[i][j] = 'k')
			{
				res_mat[i][j] = ' ';
			}
		}
	}
}

void win(char** mat, int h, int w, char** res_mat)
{
	std::cout << "\033[1;32m";
	std::cout << std::setw(190) << std::right << "~~~Congratulations~~~" << std::endl;
	std::cout << std::setw(185) << std::right << "~~~YOU WIN~~~" << std::endl;
	std::cout << "\033[1;0m";
	for (int i = 0; i < h; ++i)
	{
		for (int j = 0; j < w; ++j)
		{
			if (mat[i][j] == 'k')
			{
				res_mat[i][j] = ' ';
			}
			else
			{
				res_mat[i][j] = mat[i][j];
			}
		}
	}
}

void set_menu()
{
	int choice{};
	State choose;
	do {
		do
		{
			std::cout << std::setw(196) << std::right << "\033[1;34m Minesweeper \033[1;0m\n" << std::endl;
			std::cout << std::setw(195) << std::right << "\033[1;34m  ___________\033[1;0m\n" << std::endl;
			std::cout << std::setw(192) << std::right << "\033[1;34m MENU \033[1;0m\n" << std::endl;
			std::cout << std::setw(198) << std::right << "\033[1;34m Press 1 to START \033[1;0m\n" << std::endl;
			std::cout << std::setw(198) << std::right << "\033[1;34m Press 0 to EXIT \033[1;0m\n" << std::endl;
			std::cout << std::setw(182) << std::right << "\033[1;34m";
			std::cin >> choice;
			std::cout << "\033[1;0m";
			system("cls");
		} while (choice != 1 && choice != 0);
		choose = static_cast<State>(choice);
		switch (choose)
		{
		case START:
			play();
			break;
		case EXIT:
			std::cout << std::setw(178) << std::right << "\033[1;34m";
			std::cout << "Programm exited!" << std::endl;
			std::cout << "\033[1;0m";
		};
		Sleep(5000);
		system("cls");
	} while (choose != EXIT);
}
void play()
{
	int height{};
	int width{};
	int mine_count{};
	do {
		std::cout  << "\033[1;34m\n";
		std::cout << std::setw(195) << std::right << "Enter the size (3 <= size <= 49) : ";
		std::cin >> height;
		std::cout << "\033[1;0m";
	} while (height < 3 || height > 49);
	width = height;
	int fields_count = width * height;
	do {
		std::cout << "\033[1;34m";
		std::cout << std::setw(193) << std::right << "Enter the count of mine( mine <= " << fields_count / 2  << ") : ";
		std::cin.clear();
		std::cin >> mine_count;
		std::cout << "\033[1;0m";
	} while (mine_count < 1 || mine_count > fields_count / 2);
	char** mat = set_mat(height, width, mine_count);
	char** res_mat = set_default_mat(height, width);
	int tmp_i{};
	int tmp_j{};
	int count{};
	do {
		count = 0;
		do {
			std::cout << "\033[1;34m";
			std::cout << std::setw(180) << std::right << "Enter the i index : ";
			std::cin.clear();
			std::cin >> tmp_i;
			std::cout << "\033[1;0m";
		} while (tmp_i < 0 || tmp_i >= height);
		do
		{
			std::cout << "\033[1;34m";
			std::cout << std::setw(180) << std::right << "Enter the j index : ";
			std::cin.clear();
			std::cin >> tmp_j;
			std::cout << "\033[1;0m";
		} while (tmp_j < 0 || tmp_j >= width);
		system("cls");
		if (mat[tmp_i][tmp_j] != 'm')
		{
			start(mat, tmp_i, tmp_j, height, width, res_mat, count);
		}
		else
		{
			won(mat, height, width, res_mat);
			print_field(res_mat, height, width, false);
			delete_mat(mat, height);
			delete_mat(res_mat, height); 
			return;
		}
	} while ((count) != mine_count);
	system("cls");
	win(mat, height, width, res_mat);
	std::cout << "\033[1;34m";
	print_field(res_mat, height, width);
	std::cout << "\033[1;0m";
	delete_mat(mat, height);
	delete_mat(res_mat, height);
}