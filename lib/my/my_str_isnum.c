/*
** EPITECH PROJECT, 2020
** my_str_isnum.c
** File description:
** my_str_isnum
*/

int my_str_isnum(char const *str)
{
    int i = 0;

    for (i; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9')
            return 1;
        else
            return 0;
    }
}
