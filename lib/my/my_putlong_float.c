/*
** EPITECH PROJECT, 2022
** my putlong float
** File description:
** my putlong float
*/

#include "../../include/my.h"

int my_putlong_float(long nb1, char *basic)
{
    int i = 0;
    int lengh = my_strlen(basic);
    long nb2 = 0;

    if (nb1 < 0) {
        nb1 = -nb1;
        i += 1;
        my_putchar('-');
    }
    if (nb1 > 0) {
        nb2 = nb1;
        nb1 /= lengh;
        i += my_putlong_float(nb1, basic);
        i += 1;
        my_putchar(basic[nb2 % lengh]);
    }
    return (i);
}
