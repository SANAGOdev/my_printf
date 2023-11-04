/*
** EPITECH PROJECT, 2023
** day10
** File description:
** my_getnbr.c
*/

#include "my.h"

static int calc_int(int a, int b)
{
    return ((0x7FFFFFFF - b) / 10 >= a);
}

static int calc_sign(char const *str, int i)
{
    if (str[i] == '+')
        return 1;
    if (str[i] == '-')
        return 0;
    return 84;
}

static int calc_res(char const *str, int i, int res)
{
    if (!calc_int(res, str[i] - '0'))
        return 0;
    res = res * 10 + (str[i] - '0');
    return res;
}

int my_getnbr(char const *str)
{
    int res = 0;
    int sign = 1;
    int len = my_strlen(str);

    for (int i = 0; i < len; i++) {
        if ((str[i] >= 48 && str[i] <= 57) ||
                (str[i] == '+') || (str[i] == '-')) {
                    sign = calc_sign(str, i);
                    res = calc_res(str, i, res);
        } else {
            break;
        }
    }
    return (sign ? res : -res);
}
