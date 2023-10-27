/*
** EPITECH PROJECT, 2023
** day07
** File description:
** my_strncat.c
*/

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = 0;
    int dest_len = 0;

    while (dest[dest_len] != '\0')
        dest_len++;
    while (i < nb && src[i] != '\0') {
        dest[dest_len + i] = src[i];
        i++;
    }
    dest[dest_len + i] = '\0';
    return dest;
}
