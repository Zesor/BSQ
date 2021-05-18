/*
** EPITECH PROJECT, 2021
** malloc
** File description:
** malloc
*/

#include "my_printf.h"

void func(char **plan, int width, int heigth, int **arr)
{
    for (int i = 0; i <= width; i++)
        arr[i] = malloc(sizeof(char) * heigth + 1);
}

int **is_square_of_size(char **plan, int col, int **arr)
{
    int x;
    int y = 0;

    int row = my_getnbr(plan[0]);
    arr = malloc(sizeof(int *) * row + 1);
    for (x = 0; x <= row; x = x + 1)
        arr[x] = malloc(sizeof(int) * col + 1);
    for (x = 1; x <= row; x = x + 1) {
        for (y = 0; y < col; y = y + 1) {
            if (plan[x][y] == '.')
                arr[x - 1][y] = 1;
            if (plan[x][y] == 'o')
                arr[x - 1][y] = 0;
        }
        arr[x - 1][y] = -1;
    }
    arr[x - 1] = NULL;
    return arr;
}

char **my_array(char *ptr)
{
    char **arr = malloc(sizeof(char *) * 100001);
    int i = 0;
    int posx = 0;
    int posy = 0;

    arr[posy] = malloc(sizeof(char) * 100001);
    while (ptr[i] != '\0') {
        if (ptr[0] == '\0')
            exit(84);
        if (ptr[i] == '\n') {
            posy++;
            posx = 0;
            arr[posy] = malloc(100001);
        } else {
            arr[posy][posx] = ptr[i];
            posx++;
        }
        i++;
    }
    return arr;
}