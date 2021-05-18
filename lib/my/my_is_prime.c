/*
** EPITECH PROJECT, 2020
** my_is_prime.c
** File description:
** description
*/

int my_is_prime(int nb)
{
    if (nb <= 0 || nb == 1)
        return (0);
    for (int z = 2; z < nb; z++) {
        if (nb % z == 0)
            return (0);
    }
    return (1);
}
