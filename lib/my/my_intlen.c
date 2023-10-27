/*
** EPITECH PROJECT, 2023
** myprintf
** File description:
** my_int_len.c
*/

#include "my.h"

int my_intlen(int nb)
{
    int len = 1;

    if (nb < 0) {
        nb = -nb;
        len++;
    }
    while (nb / 10 != 0) {
        nb = nb / 10;
        len++;
    }
    return len;
}
