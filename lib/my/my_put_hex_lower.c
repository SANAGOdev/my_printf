/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** my_put_hex_lower.c
*/

#include "my.h"

int my_put_hex_lower(int nb)
{
    char hexa[50];
    int i = 0;
    int len = 0;

    while (nb != 0) {
        hexa[i] = (char)(*("0123456789abcdef" + ((nb % 16) & (15))));
        nb = (nb / 16);
        i++;
    }
    for (int k = i -1; k >= 0; k--) {
        my_putchar(hexa[k]);
        len += 1;
    }
    return len;
}
