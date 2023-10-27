/*
** EPITECH PROJECT, 2023
** day08
** File description:
** my_strdup.c
*/

#include "my.h"

char *my_strdup(const char *src)
{
    int len = my_strlen(src);
    int i = 0;
    char *res;

    if (src == NULL)
        return NULL;
    res = malloc(sizeof(char *) * len + 1);
    if (res == NULL)
        return NULL;
    while (i <= len) {
        res[i] = src[i];
        i++;
    }
    return res;
}
