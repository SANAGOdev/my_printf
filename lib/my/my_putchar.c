/*
** EPITECH PROJECT, 2022
** printer
** File description:
** my_putchar
*/

#include "../../includes/my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
