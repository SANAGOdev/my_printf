/*
** EPITECH PROJECT, 2023
** day04
** File description:
** my_swap.c
*/

void my_swap(int *a, int *b)
{
    int a2 = *a;
    int b2 = *b;

    *a = b2;
    *b = a2;
}
