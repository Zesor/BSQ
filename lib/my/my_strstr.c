/*
** EPITECH PROJECT, 2020
** my_strstr.c
** File description:
** yes
*/

char *my_strstr(char *str, char const *to_find)
{
        int z = 0;
        int rule = 1;
        int k = 0;

        for (z; str[z] != '\0'; z++) {
        for (k; str[z] != '\0' && to_find[k] != '\0' && rule == 1; k++) {
            if (str[z + k] != to_find[k]) rule = 0;
        }
        if (rule == 1) return &str[z];
    }
    return '\0';
}
