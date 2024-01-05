#ifndef __FUNCTIONS_HPP__
#define __FUNCTIONS_HPP__

enum State {
	EXIT,
	START
};  

#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib> 
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

void set_mines(char** mat, int h, int w, int mine_count);
void set_default(char** mat, int h, int w);
int set_count(char** mat, int h, int w, int i, int j);
void set_field(char** mat, int h, int w, int mine_count);
void print_field(char** mat, int h, int w, bool win);
void open_fields(char** mat, int h, int w, int i, int j, char** res_mat);
char** set_mat(int h, int w, int mine_count);
char** set_default_mat(int h, int w);
void start(char** mat, int tmp_i, int tmp_j, int height, int width, char** res_mat, int& count); 
void delete_mat(char**& mat, int h);
void won(char** mat, int h, int w, char** res_mat);
void play();
void set_menu();

#endif