/*
** EPITECH PROJECT, 2022
** mp_f
** File description:
** mp_f
*/

#include "../includes/my.h"

int mp_f(char format, va_list list)
{
    va_start(list, format);

    return my_put_float(va_arg(list, double));

    va_end(list);
}
