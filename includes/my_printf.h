/*
** EPITECH PROJECT, 2020
** my_printf.h
** File description:
** my_printf.h
*/

#ifndef MY_H_
#define MY_H_

#include <sys/types.h>
#include <stddef.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdarg.h>

long my_getnbr(char const *str);
int my_strlen(char const *str);
void my_printf(char *fmt, ...);

    /* function for bsq */

char **my_array(char *ptr);
int **is_square_of_size(char **plan, int col,  int **arr);
int condition(int **plan, int i, int j);
int **my_algo(int **plan);
int find_biggest_square(int **plan);
int *find_position(int **plan, int size_max);
void the_biggest_square(int **arr, int *pos, int size);
char **fs_open_file(char *filepath);

    /* error_handler */
int empty(char file);
int wrong_argument(int ac);
int test_tab(int **tab);
int file_descriptor(int fd);
int read_error(int r);

#endif