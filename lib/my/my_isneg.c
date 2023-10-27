/*
** EPITECH PROJECT, 2023
** day03
** File description:
** my_isneg.c
*/

#include "my.h"

int my_isneg(int n)
{
    if (n < 0) {
        my_putchar('N');
        my_putchar('\n');
        return 0;
    }
    my_putchar('P');
    my_putchar('\n');
    return 0;
}
