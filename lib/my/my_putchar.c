/*
** EPITECH PROJECT, 2023
** day07
** File description:
** my_putchar.c
*/

#include "my.h"

int my_putchar(char c)
{
    write(1, &c, 1);
    return 1;
}
