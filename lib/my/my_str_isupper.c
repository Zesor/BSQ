/*
** EPITECH PROJECT, 2020
** my_str_isupper.c
** File description:
** my_str_isupper
*/

int my_str_isupper(char const *str)
{
    int i = 0;

    for (i; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            return 1;
        else
            return 0;
    }
}
