/*
** EPITECH PROJECT, 2020
** main
** File description:
** main
*/

#include "my_printf.h"

int main(int ac, char **av)
{
    int biggest_square;
    int **arr;
    int *position;
    char **plan;

    plan = fs_open_file(av[1]);
    if (ac == 2) {
        arr = is_square_of_size(plan, my_strlen(plan[1]), arr);
        arr = my_algo(arr);
        biggest_square = find_biggest_square(arr);
        position = find_position(arr, biggest_square);
        the_biggest_square(arr, position, biggest_square);
    } else
        wrong_argument(ac);
    return 0;
}