/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** my_printf.c
*/

#include "my.h"

static int is_valid_flag(char const *format, int i)
{
    return (format[i] == '%' && (format[i + 1] == '%'
    || format[i + 1] == 'c' || format[i + 1] == 's' || format[i + 1] == 'd'
    || format[i + 1] == 'i' || format[i + 1] == 'x' || format[i + 1] == 'X'
    || format[i + 1] == 'o' || format[i + 1] == 'p' || format[i + 1] == 'n'
    || format[i + 1] == 'u' || format[i + 1] == 'f' || format[i + 1] == 'F'
    || format[i + 1] == 'b' || format[i + 1] == 'e' || format[i + 1] == 'E'
    || format[i + 1] == 'g' || format[i + 1] == 'G' || format[i + 1] == '#'
    || format[i + 1] == '+' || format[i + 1] == '-' || format[i + 1] == '0'
    || ((format[i + 1] == 'l') && (format[i + 2] == 'd'))
    || ((format[i + 1] == 'l') && (format[i + 2] == 'l')
    && (format[i + 3] == 'd')) || ((format[i + 1] == 'l')
    && (format[i + 2]) == 'f')
    ));
}

static int my_flag_n_len(char const *format)
{
    int n_len = 0;

    for (int i = 0; format[i] != '\0'; i++) {
        if ((format[i] == '%') && (format[i + 1] == 'n')) {
            n_len = i;
            break;
        }
    }
    return n_len;
}

static void check_if_flag(const char *format, int i)
{
    if (format[i] == '%')
        my_putchar('%');
}

static int loop_conditions(char const *format, va_list ap, int i, int count)
{
    int counter = 0;

    if ((format[i] == 's'))
        counter += (my_putstr(va_arg(ap, char *)) - 2);
    if ((format[i] == 'c'))
        counter += (my_putchar(va_arg(ap, int)) - 2);
    if (((format[i] == 'd') || (format[i] == 'i')))
        counter += (my_put_nbr(va_arg(ap, int)) - 2);
    if ((format[i] == 'p'))
        counter += (my_put_pointer(va_arg(ap, void *)) - 2);
    if ((format[i] == 'u'))
        counter += (my_put_unsigned_int(va_arg(ap, unsigned int)) - 1);
    if ((format[i] == 'f') || format[i] == 'F')
        counter += my_put_float(va_arg(ap, double));
    if ((format[i] == 'n'))
        *(va_arg(ap, int *)) = (my_flag_n_len(format) + count);
    if ((format[i] == '%'))
        my_putchar('%');
    return counter;
}

static int loop_conditions2(char const *format, va_list ap, int i)
{
    int counter = 0;

    if ((format[i] == 'o'))
        counter += (my_put_octal((va_arg(ap, int))) - 2);
    if ((format[i] == 'x'))
        counter += (my_put_hex_lower((va_arg(ap, int))) - 2);
    if ((format[i] == 'X'))
        counter += (my_put_hex_upper((va_arg(ap, int))) - 2);
    if ((format[i] == 'b'))
        counter += (my_put_bin((va_arg(ap, int))) - 2);
    if (format[i] == 'e')
        my_put_e(va_arg(ap, double));
    if ((format[i] == 'E'))
        my_put_e_upper(va_arg(ap, double));
    return counter;
}

static int check_long_d(char const *format, int i, va_list ap, int count)
{
    if (format[i] == '%') {
        if ((format[i + 1] == 'l') && (format[i + 2] == 'l')
        && (format[i + 3] == 'd')) {
            count += my_put_nbr(va_arg(ap, unsigned long long));
            return 4;
        }
        if (format[i + 1] == 'l' && format[i + 2] == 'd') {
            count += my_put_nbr(va_arg(ap, unsigned long));
            return 3;
        }
        if ((format[i + 1] == 'l') && (format[i + 2] == 'f')) {
            count += my_put_float(va_arg(ap, double));
            return 3;
        }
    }
    return 0;
}

int my_printf(const char *format, ...)
{
    int count = 0;
    va_list ap;

    va_start(ap, format);
    for (int i = 0; format[i] != '\0';  i++) {
        if (format[i] == '%') {
            count += loop_conditions2(format, ap, i + 1);
            count += loop_conditions(format, ap, i + 1, count);
        }
        i += (check_long_d(format, i, ap, count));
        if (format[i] != '%')
            my_putchar(format[i]);
        if ((is_valid_flag(format, i) == 1))
            i++;
        else
            check_if_flag(format, i);
    }
    va_end(ap);
    return 0;
}
