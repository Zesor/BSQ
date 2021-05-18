/*
** EPITECH PROJECT, 2020
** my_strncpy.c
** File description:
** yes
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    while (src[i] != n)
    {
        dest[i] = src[i];
        i = i + 1;

    }
    return (dest);
}