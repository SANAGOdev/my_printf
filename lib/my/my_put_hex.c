/*
** EPITECH PROJECT, 2022
** my put hex
** File description:
** my put hex
*/

#include "../../includes/my.h"

int my_put_hex(int nb)
{
    int res = 0, i = 1;
    while (nb != 0) {
        res += (nb % 16) * i;
        nb /= 16;
        i *= 10;
    }
    my_put_nbr(res);
    return res;
}
