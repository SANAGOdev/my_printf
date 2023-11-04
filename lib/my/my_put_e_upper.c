/*
** EPITECH PROJECT, 2023
** B-CPE-101-TLS-1-1-myprintf-dorian.melenotte
** File description:
** ma_put_e_upper.c
*/

#include "my.h"

int is_double_negative_2(double nb)
{
    return nb < 0;
}

int absolute_value_2(int number)
{
    if (number >= 0)
        return number;
    else
        return -number;
}

void put_scientific_2(double nb, int exp)
{
    if (nb == 0) {
        my_putstr("0.000000e+00");
        return;
    }
    my_put_float(nb + 0.000001);
    my_putstr("E");
    if (exp < 0)
        my_putchar('-');
    else
        my_putchar('+');
    if (absolute_value_2(exp) > 0 && absolute_value_2(exp) < 10)
        my_putchar('0');
    my_put_nbr(absolute_value_2(exp));
}

void my_put_e_upper(double nb)
{
    int i = 0;

    if (is_double_negative_2(nb)) {
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
    put_scientific_2(nb, i);
}
