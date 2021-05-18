/*
** EPITECH PROJECT, 2020
** my_strdup.c
** File description:
** my_strdup
*/

#include <stdlib.h>
#include <unistd.h>

int my_strlen(char const *str)
{
    int p = 0;
    while (str[p] != '\0' ) {
        p = p + 1;
    }
    return (p);
}

char *my_strdup(char const *src)
{
    char *str;
    int i = 0;
    int a = my_strlen(src);

    str = malloc(sizeof(char) * (a + 1));
    while (i < a)
    {
        str[i] = src[i];
        i = i + 1;
    }
    return (str);
}
