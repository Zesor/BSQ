/*
** EPITECH PROJECT, 2020
** my_strncmp.c
** File description:
** yes
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int z = 0;
    int rule = 1;

    for (z; s1[z] != '\0' && s2[z] != '\0' && rule == 1 && z < n; z++) {
        if (s1[z] != s2[z]) rule = 0;
    }
    if (s1[z] != s2[z]) rule = 0;
    if (rule == 1) {
        return 0;
    } else {
        return s1[z] - s2[z];
    }
}
