/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** my_put_long_float.c
*/

#include "my.h"

int my_putlong_float(long nb, char *num_list)
{
    int long_float = 0;
    int lengh = my_strlen(num_list);
    long tmp = 0;

    if (nb > 0) {
        tmp = nb;
        nb /= lengh;
        long_float += my_putlong_float(nb, num_list);
        long_float += 1;
        my_putchar(num_list[tmp % lengh]);
    }
    if (nb < 0) {
        nb = -nb;
        long_float += 1;
        my_putchar('-');
    }
    return long_float;
}
