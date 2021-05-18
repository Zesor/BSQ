/*
** EPITECH PROJECT, 2020
** my_strcat.c
** File description:
** yes
*/

char *my_strcat(char *dest, char const *src)
{
    int maxlen = 0;
    int i = 0;

    for (maxlen; dest[maxlen] != '\0'; maxlen++)
    for (i; src[i] != '\0'; i++) {
        dest[maxlen + i] = src[i];
    }
    dest[maxlen + i] = '\0';
    return (dest);
}
