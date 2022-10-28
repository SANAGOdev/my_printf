/*
** EPITECH PROJECT, 2022
** print float number
** File description:
** print float number with six digit after coma
*/

#include "../../include/my.h"

int my_put_float(double nb)
{
    long d1 = 0;
    long tmp = nb;
    double d2 = 0;
    int i = 0;
    long d2_2 = 0;
    d1 = nb * (float)1000000;
    d1 -= tmp * 1000000;
    d2 = (double)d1;

    i += my_putlong_float(tmp, "0123456789");
    i++;
    my_putchar('.');
    if ((long)d2 < 0)
        d2 *= -1;
    d2_2 =d2;
    while (d2_2 < 99999) {
        d2_2 *= 10;
        if (d2_2 == 0)
            d2_2 += 9;
        my_putchar('0');
    }
    i += my_putlong_float((long)d2, "0123456789");
    return (i);
}
