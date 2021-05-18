/*
** EPITECH PROJECT, 2020
** my_strcapitalize.c
** File description:
** yes
*/

char *my_strcapitalize(char *str)
{
    int rule = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
    }
    for (int i = 0; str[i] != '\0'; i++) {
        rule = 0;
        if (!(str[i-1] >= 48 && str[i-1] <= 57))
            rule = 1;
        if (!(str[i-1] >= 'A' && str[i-1] <= 90) && rule == 1)
            rule = 2;
        if (!(str[i-1] >= 97 && str[i-1] <= 122) && rule == 2)
            rule = 3;
        if (str[i] >= 97 && str[i] <= 122 && rule == 3)
            str[i] = str[i] - 32;
    }
    return (str);
}