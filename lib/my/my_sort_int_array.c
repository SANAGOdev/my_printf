/*
** EPITECH PROJECT, 2023
** WorkshopLib
** File description:
** my_sort_int_array.c
*/

#include "my.h"

static void swap_if_needed(int *nb1, int *nb2)
{
    if (*nb1 > *nb2)
        my_swap(nb1, nb2);
}

void my_sort_int_array(int *tab, int size)
{
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - 1 - i; j++)
            swap_if_needed(&tab[j], &tab[j + 1]);
    }
}
