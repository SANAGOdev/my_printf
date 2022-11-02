/*
** EPITECH PROJECT, 2022
** my header file
** File description:
** my header file
*/

#ifndef MY_
#define MY_

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

int my_put_nbr(int nb1);
void my_putchar(char c);
int my_putstr(char const *arr);
int my_strlen(char const *arr);
int my_printf(const char* format, ...);

int my_put_float(double nb);
int my_putlong_float(long nb1, char *basic);
int my_put_octal(int nb);
int my_put_hex(int nb);

#endif /* !MY_ */
