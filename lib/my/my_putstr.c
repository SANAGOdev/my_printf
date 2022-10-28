/*
** EPITECH PROJECT, 2022
** my_putstr
** File description:
** task02
*/

#include "../../include/my.h"

int my_putstr(char const *arr)
{
    int count = 0;
    while (arr[count] != '\0') {
        my_putchar(arr[count]);
        count = count + 1;
    }
    return count;
}
