/*
** EPITECH PROJECT, 2020
** my_str_isalpha.c
** File description:
** str_isalpha
*/

int my_str_isalpha(char const *str)
{
    int i = 0;

    for (i; str[i] != '\0'; i++) {
        if (str[i] > 65 && str[i] < 90 || str[i] > 97 && str[i] < 122)
            return 1;
        else
            return 0;
    }
}
