/*
** EPITECH PROJECT, 2022
** mini_printf
** File description:
** printer
*/

#include "includes/my.h"

int my_printf(const char* format, ...)
{
    va_list list;
    int count = 0;
    va_start(list, format);
    for (int i = 0; i < my_strlen(format); i++) {
        if (format[i] == '%' && format[i + 1] == 'c')
            my_putchar((char) va_arg(list, int));
        if (format[i] == '%' && format[i + 1] == 's')
            my_putstr(va_arg(list, char *));
        if (format[i] == '%' && (format[i + 1] == 'd' || format[i + 1] == 'i'))
            my_put_nbr(va_arg(list, int));
        if (format[i] == '%' && format[i + 1] == 'o')
            my_put_octal(va_arg(list, int));
        if (format[i] == '%' && (format[i + 1] == 'x' || format[i + 1] == 'X'))
            my_put_hex(va_arg(list, int));
        if (format[i] == '%' && format[i + 1] == 'f')
            my_put_float(va_arg(list, double));
        if (format[i] == '%' && format[i + 1] == '%')
            my_putchar('%');
        if (format[i] != '%')
            my_putchar(format[i]);
        else
            i++;
        count++;
    }
    va_end(list);
    return count;
}
