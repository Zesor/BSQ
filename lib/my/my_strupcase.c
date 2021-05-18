/*
** EPITECH PROJECT, 2020
** my_strupcase.c
** File description:
** yes
*/

char *my_strupcase(char *str)
{
    for (int z = 0; str[z] != '\0'; z++) {
        if (str[z] >= 97 && str[z] <= 122)
            str[z] = str[z] - 32;
    }
    return (str);
}
