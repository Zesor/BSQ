/*
** EPITECH PROJECT, 2021
** algo
** File description:
** algo
*/

#include "my_printf.h"

int condition(int **plan, int row, int col)
{
    int high;
    int	left;
    int	high_left;

    if (row == 0)
        return (84);
    else {
        high = plan[row][col - 1];
        left = plan[row - 1][col];
        high_left = plan[row - 1][col - 1];
        if (high <= left && high <= high_left)
            return (high);
        else if (left <= high && left <= high_left)
            return (left);
        else
            return (high_left);
    }
}

int **my_algo(int **plan)
{
    int i = 1;
    int j;

    while (plan[i] != NULL) {
        for (j = 1; plan[i][j] != -1; j = j + 1) {
            if (plan[i][j] != 0)
                plan[i][j] += condition(plan, i, j);
        }
        i = i + 1;
    }
    return plan;
}