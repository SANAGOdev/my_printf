/*
** EPITECH PROJECT, 2023
** day06
** File description:
** my_revstr.c
*/

#include "my.h"

char *my_revstr(char *str)
{
    int n1 = my_strlen(str) - 1;
    int i = 0;
    char a;

    while (i < n1) {
        a = str[i];
        str[i] = str[n1];
        str[n1] = a;
        n1--;
        i++;
    }
    return str;
}
