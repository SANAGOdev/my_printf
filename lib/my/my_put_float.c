/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** my_float.c
*/

#include "my.h"

static int put_float_check(long d2, double d3, int res)
{
    if ((long)d3 < 0)
        d3 *= -1;
    d2 = d3;
    while (d2 < 99999) {
        d2 *= 10;
        if (d2 == 0)
            d2 += 9;
        my_putchar('0');
    }
    res += my_putlong_float((long)d3, "0123456789");
    return res;
}

int my_put_float(double nb)
{
    long d1 = 0;
    long tmp = nb;
    long d2 = 0;
    double d3 = 0;
    int res = 0;

    d1 = nb * (float)1000000;
    d1 -= tmp * 1000000;
    d3 = (double)d1;
    if (nb < 0 && nb > -1) {
        my_putchar('-');
    if (nb < 1)
        my_putchar('0');
    }
    res += my_putlong_float(tmp, "0123456789");
    res++;
    my_putchar('.');
    put_float_check(d2, d3, res);
    return 7;
}
