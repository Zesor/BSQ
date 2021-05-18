/*
** EPITECH PROJECT, 2021
** error_handler
** File description:
** erroe_handler
*/

#include <stdlib.h>
#include "my_printf.h"

int wrong_argument(int ac)
{
    if (ac < 2 || ac > 2) {
        my_printf("USAGE: ./bsq [map]\n");
        return 84;
    }
    return 0;
}

int empty(char file)
{
    if (file == '\0') {
        my_printf("Your file probably contains nothing\n");
        my_printf("USAGE: ./bsq [map]\n");
        exit(84);
    }
}

int test_tab(int **tab)
{
    if (tab == NULL) {
        my_printf("Wrong file\n");
        my_printf("USAGE: ./bsq [map]\n");
        exit(84);
    }
}

int file_descriptor(int fd)
{
    if (fd == -1) {
        my_printf("FIle doesn't exist\n");
        my_printf("USAGE: ./bsq [map]\n");
        exit(84);
    }
    return fd;
}

int read_error(int r)
{
    if (r == -1) {
        my_printf("read failed");
        exit(84);
    }
}