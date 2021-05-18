/*
** EPITECH PROJECT, 2020
** my_getnbr.c
** File description:
** description
*/

long my_getnbr(char const *str)
{
    long i = 0;
    long nbr = 0;
    long z = 1;

    while (str[i] != '\0') {
        if (str[i] == '-') {
            z *= -1;
        }
        if (str[i] >= '0' && str[i] <= '9') {
            nbr = nbr + str[i] - '0';
            nbr = nbr * 10;
        }
        else if (str[i] != '-' && str[i] != '+' && nbr != 0) {
            break;
        }
        i++;
    }
    nbr /= 10;
    nbr *= z;
    return (nbr);
}
