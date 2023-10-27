/*
** EPITECH PROJECT, 2022
** adresshexade
** File description:
** test
*/

#include "my.h"

int my_put_pointer(void *ptr)
{
    char hex_digits[] = "0123456789abcdef";
    unsigned long ptr_value = (unsigned long)ptr;
    int size = sizeof(void *) * 2;
    int index = 0;
    int is_zero = 0;

    my_putstr("0x");
    for (int i = size - 1; i >= 0; i--) {
        index = (ptr_value >> (i * 4)) & 15;
        if (index != 0 || is_zero) {
            my_putchar(hex_digits[index]);
            is_zero = 1;
        }
    }
    if (!is_zero)
        my_putchar('0');
    return 14;
}
