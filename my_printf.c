/*
** EPITECH PROJECT, 2022
** mini_printf
** File description:
** printer
*/

#include "include/my.h"

int my_printf(const char* format, ...)
{
    va_list ap;
    int count = 0;
    va_start(ap, format);
    for (int i = 0; i < my_strlen(format); i++) {
        if (format[i] == '%' && format[i + 1] == 's')
            my_putstr(va_arg(ap, char *));
        if (format[i] == '%' && (format[i + 1] == 'd' || format[i + 1] == 'i'))
            my_put_nbr(va_arg(ap, int));
        if (format[i] == '%' && format[i + 1] == '%')
            my_putchar('%');
        if (format[i] == '%' && format[i + 1] == 'c')
            my_putchar((char) va_arg(ap, int));
        if (format[i] == '%' && format[i + 1] == 'f')
            my_put_float(va_arg(ap, double));
        if (format[i] != '%') {
            my_putchar(format[i]);
        } else
            i++;
        count++;
    }
    va_end(ap);
    return count;
}
