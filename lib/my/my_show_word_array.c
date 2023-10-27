/*
** EPITECH PROJECT, 2023
** day08
** File description:
** my_show_word_array.c
*/

#include "my.h"

int my_show_word_array(char const **tab)
{
    int i = 0;

    while (tab[i] != NULL) {
        my_putstr(tab[i]);
        i++;
    }
    return 0;
}
