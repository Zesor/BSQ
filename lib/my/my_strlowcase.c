/*
** EPITECH PROJECT, 2020
** my_strlowcase.c
** File description:
** yes
*/

char *my_strlowcase(char *str)
{
    for (int z = 0; str[z] != '\0'; z++) {
        if (str[z] >= 65 && str[z] <= 90)
            str[z] += 32;
    }
    return (str);
}
