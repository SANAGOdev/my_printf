/*
** EPITECH PROJECT, 2022
** mp_o
** File description:
** mp_o
*/

#include "../includes/my.h"

int mp_o(char format, va_list list)
{
    va_start(list, format);

    return my_put_octal(va_arg(list, int));

    va_end(list);
}