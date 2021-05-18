/*
** EPITECH PROJECT, 2020
** my_printf.c
** File description:
** my_printf
*/

#include "my.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

void pourc_flags(va_list *list);

void my_pflags(va_list *list);

void my_bflags(va_list *list);

void my_oflags(va_list *list);

void my_uflags(va_list *list);

void my_iflags(va_list *list);

void my_cflags(va_list *list);

void my_dflags(va_list *list);

void my_sflags(va_list *list);

void my_xflags(va_list *list);

int my_Xflags(va_list *list);

int choose_index(char *array, char elem)
{
    for (int index = 0; array[index] != 0; index++) {
        if (array[index] == elem)
            return index;
    }
    return -1;
}

void my_printf(char *fmt, ...)
{
    int trpindex = 0;
    void (*arrayFunction[11]) (va_list *) = {my_cflags, my_xflags, my_iflags,
                    my_sflags, my_dflags, my_Xflags, my_uflags, my_oflags,
                    my_bflags, my_pflags, pourc_flags};
    char arrayIndex[12] = {'c', 'x', 'i', 's', 'd', 'X', 'u', 'o', 'b',
                        'p', '%', 0};
    va_list list;

    va_start(list, fmt);
    for (int i = 0; fmt[i] != 0; i++) {
        if (i != 0 && fmt[i - 1] == '%') {
            trpindex = choose_index(arrayIndex, fmt[i]);
            if (trpindex != -1)
                (*arrayFunction[trpindex]) (&list);
        } else if (fmt[i] != '%')
            write(1, &fmt[i], 1);
    }
}