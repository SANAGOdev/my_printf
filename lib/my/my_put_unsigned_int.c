/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** my_put_unsigned_int.c
*/

#include "my.h"

int my_put_unsigned_int(unsigned int nb)
{
    int tmp = 0;

    if (nb <= 10)
        my_putchar(nb + '0');
    else {
        tmp = nb % 10;
        nb = nb / 10;
        my_put_nbr(nb);
        my_putchar(tmp + '0');
    }
    return my_intlen(nb);
}
