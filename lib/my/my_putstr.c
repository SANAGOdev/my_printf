/*
** EPITECH PROJECT, 2023
** day04
** File description:
** my_putstr.c
*/

#include "my.h"

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != 0) {
        my_putchar(str[i]);
        i++;
    }
    return my_strlen(str);
}
