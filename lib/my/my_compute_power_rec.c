/*
** EPITECH PROJECT, 2020
** my_compute_power_rec.c
** File description:
** description
*/

int my_compute_power_rec(int nb, int power)
{
    int sup = 1;

    if (power == 0)
        return 1;
    if (power < 0)
        return 0;
    sup = nb * my_compute_power_rec(nb, power - 1);
    return (sup);
}
