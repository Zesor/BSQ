/*
** EPITECH PROJECT, 2020
** my_strlen.c
** File description:
** yes
*/

int my_strlen(char const *str)
{
    int p = 0;
    while (str[p] != '\0' )
    {
        p = p + 1;
    }
    return (p);
}
