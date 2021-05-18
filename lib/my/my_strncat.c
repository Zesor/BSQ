/*
** EPITECH PROJECT, 2020
** my_strncat.c
** File description:
** yes
*/

char *my_strncat(char *dest, char const *src, int nb)
{
    int maxlen = 0;
    int z = 0;

    for (maxlen; dest[maxlen] != '\0'; maxlen++);
    for (z; src[z] != '\0' && z < nb; z++) {
        dest[maxlen + z] = src[z];
    }
    dest[maxlen + z] = '\0';
    return dest;
}
