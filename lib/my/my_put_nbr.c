/*
** EPITECH PROJECT, 2020
** my_put_nbr.c
** File description:
** putnbr
*/

#include"my.h"

int my_put_nbr(int nb)
{
    int x;

    if (nb < 0)
    {
        my_putchar('-');
        nb = nb * -1;
        my_put_nbr(nb);
    }
    else if (nb < 10 && nb >= 0)
    {
        my_putchar(nb + '0');
    }
    else if (nb >= 10)
    {
        x = nb % 10;
        my_put_nbr(nb / 10);
        my_putchar(x + '0');
    }
}
