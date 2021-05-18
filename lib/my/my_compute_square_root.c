/*
** EPITECH PROJECT, 2020
** my_compute_square_root.c
** File description:
** description
*/

int my_compute_square_root(int nb)
{
    if (nb < 0)
        return (0);
    for (int z = 0; z <= nb; z++) {
        if ( z * z == nb)
            return (z);
    }
    return (0);
}
