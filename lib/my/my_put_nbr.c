/*
** EPITECH PROJECT, 2023
** day03
** File description:
** my_put_nbr.c
*/

#include "my.h"

int my_put_nbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    }
    if (nb >= 0 && nb <= 9) {
        my_putchar(nb + 48);
    }
    if (nb == -2147483648) {
        my_putstr("2147483648");
    } else if (nb > 9) {
        my_put_nbr(nb / 10);
        my_putchar(nb % 10 + 48);
    }
    return my_intlen(nb);
}
