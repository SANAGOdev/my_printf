/*
** EPITECH PROJECT, 2023
** WorkshopLib
** File description:
** my_strstr.c
*/

#include "my.h"

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;
    int j = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == to_find[j])
            j++;
        else
            j = 0;
        if (to_find[j] == '\0' && j >= 1)
            return (&str[i - j + 1]);
    }
    return ((to_find[0] == '\0') ? str : 0);
}
