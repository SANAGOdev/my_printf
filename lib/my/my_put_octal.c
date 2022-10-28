/*
** EPITECH PROJECT, 2022
** my put octal
** File description:
** my put octal
*/

#include "../../includes/my.h"

int my_put_octal(int nb)
{
    int res = 0, i = 1;
    while (nb != 0) {
        res += (nb % 8) * i;
        nb /= 8;
        i *= 10;
    }
    my_put_nbr(res);
    return res;
}
