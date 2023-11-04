/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** my_put_bin.c
*/

#include "my.h"

int my_put_bin(int nb)
{
    int bin = 0;
    int base = 1;
    int rest = 0;

    if (nb == 0)
        return 0;
    while (nb > 0) {
        rest = nb % 2;
        bin += rest * base;
        nb /= 2;
        base *= 10;
    }
    my_put_nbr(bin);
    return my_intlen(bin);
}
