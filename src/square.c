/*
** EPITECH PROJECT, 2021
** square
** File description:
** square
*/

#include "my_printf.h"

int find_biggest_square(int **plan)
{
    int i = 0;
    int square = 0;
    int j = 0;

    while (plan[i] != NULL) {
        for (j = 0; plan[i][j] != -1; j = j + 1) {
            if (plan[i][j] > square)
                square = plan[i][j];
        }
        i = i + 1;
    }
    return square;
}

int *find_position(int **plan, int size_max)
{
    int *position;
    int i = 0;
    int j;

    position = malloc(sizeof(int));
    while (plan[i] != NULL) {
        for (j = 0; plan[i][j] != -1; j++) {
            if (plan[i][j] == size_max) {
                position[0] = i;
                position[1] = j;
                return position;
            }
        }
        i = i + 1;
    }
    free(position);
    return position;
}

void the_biggest_square(int **arr, int *position, int size)
{
    int i = 0;

    while (arr[i] != NULL) {
        for (int j = 0; arr[i][j] != -1; j++) {
            if (i  > position[0] - size && i <= position[0] &&
            j > position[1] - size && j <= position[1])
                my_printf("x");
            else {
                if (arr[i][j] == 0)
                    my_printf("o");
                else
                    my_printf(".");
            }
        }
        my_printf("\n");
        i = i + 1;
    }
}