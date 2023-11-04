/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** my_put_e.c
*/

#include "my.h"

int is_double_negative(double nb)
{
    return nb < 0;
}

int absolute_value(int number)
{
    if (number >= 0)
        return number;
    else
        return -number;
}

void put_scientific(double nb, int exp)
{
    if (nb == 0) {
        my_putstr("0.000000e+00");
        return;
    }
    my_put_float(nb + 0.000001);
    my_putstr("e");
    if (exp < 0)
        my_putchar('-');
    else
        my_putchar('+');
    if (absolute_value(exp) > 0 && absolute_value(exp) < 10)
        my_putchar('0');
    my_put_nbr(absolute_value(exp));
}

void my_put_e(double nb)
{
    int i = 0;

    if (is_double_negative(nb)) {
        my_putchar('-');
        nb *= -1;
    }
    if (nb >= 1) {
        while (nb > 10) {
            nb = nb / 10;
            i++;
        }
    }
    if (nb < 1) {
        while (nb < 1 && nb != 0) {
            nb = nb * 10;
            i--;
        }
    }
    put_scientific(nb, i);
}
