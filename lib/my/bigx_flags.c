/*
** EPITECH PROJECT, 2020
** X_flags.c
** File description:
** X_flags.c
*/

#include "../../includes/my_printf.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

void hex_decimal_capitalize(int nbr);

int my_Xflags(va_list *list)
{
    int nbr = va_arg(*list, int);

    hex_decimal_capitalize(nbr);
}