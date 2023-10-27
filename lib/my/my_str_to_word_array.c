/*
** EPITECH PROJECT, 2023
** day08
** File description:
** my_str_to_word_array.c
*/

#include "my.h"

int ascii_sort(char c)
{
    return (c >= 'a' && c <= 'z') ||
        ((c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'));
}

char **my_str_to_word_array(const char *str)
{
    int arr_i = 0;
    int arr_j = 0;
    int str_len = my_strlen(str);
    char **arr = malloc((my_strlen(str) + 2) * sizeof(char *));

    arr[0] = malloc((str_len + 1) * sizeof(char));
    for (int str_i = 0; str[str_i]; str_i++) {
        if (ascii_sort(str[str_i])) {
            arr[arr_i][arr_j] = str[str_i];
            arr_j++;
        } else {
            arr[arr_i][arr_j] = '\0';
            arr_j = 0;
            arr_i++;
            arr[arr_i] = malloc((str_len + 1) * sizeof(char));
        }
    }
    arr[arr_i][arr_j] = '\0';
    arr[arr_i + 1] = NULL;
    return arr;
}
