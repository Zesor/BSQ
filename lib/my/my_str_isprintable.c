/*
** EPITECH PROJECT, 2020
** my_str_isprintable.c
** File description:
** my_str_isprintable
*/

int my_str_isprintable(char const *str)
{
    int i = 0;

    for (i; str[i] != '\0'; i++) {
        if (str[i] > 32 && str[i] < 127)
            return 1;
        else
            return 0;
    }
}
