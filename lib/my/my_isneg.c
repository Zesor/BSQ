/*
** EPITECH PROJECT, 2020
** my_isneg.c
** File description:
** description
*/

void my_putchar(char c);

int my_isneg(int n)
{
    char toto;
    toto = 0;

    if (n < 0)
    {
        my_putchar('N');
    }

    else
    {
        my_putchar('P');
    }

}
