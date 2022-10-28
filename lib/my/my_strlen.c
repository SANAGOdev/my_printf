/*
** EPITECH PROJECT, 2022
** my_strlen
** File description:
** task03
*/

#include "../../include/my.h"

int my_strlen(char const *arr)
{
    int count = 0;
    while (arr[count] != '\0'){
        count = count + 1;
    }
    return (count);
}
