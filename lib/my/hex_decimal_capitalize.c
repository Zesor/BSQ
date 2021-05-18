/*
** EPITECH PROJECT, 2020
** hex_decimal.c
** File description:
** hex_decimal
*/

#include "../../includes/my_printf.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int my_put_nbr(int nb);

void my_putchar(char c);

void hex_decimal_capitalize(int nbr)
{
    unsigned int results;

    if (nbr >= 16) {
        results = nbr % 16;
        nbr /= 16;
        my_put_nbr(nbr);
    } else if (nbr > 0) {
        results = nbr % 16;
        nbr /= 16;
    }
    if (results > 9)
        my_putchar(results + '7');
    else
        my_putchar(results + '0');
}