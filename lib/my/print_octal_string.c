/*
** EPITECH PROJECT, 2020
** print_octal_strings.c
** File description:
** put_octal_strings
*/

#include <unistd.h>
#include <stdlib.h>
#include "my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

int put_zero(int n)
{
    int arrayInt[3] = {0, 0, 0};
    int nbr;

    for (int i = 2; n > 0; i--) {
        nbr = n % 8;
        n /= 8;
        arrayInt[i] = nbr;
    }
    for (int j = 0; j != 3 ; j++) {
        my_put_nbr(arrayInt[j]);
    }

}

void print_octal_string(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < 32 || str[i] >= 127) {
            my_putchar('\\');
            put_zero(str[i]);
        } else {
            my_putchar(str[i]);
        }
    }
}

int main(void)
{
    char str[5] = "toto";
    str[1] = 127;
    print_octal_string(str);
}


