/*
** EPITECH PROJECT, 2023
** day07
** File description:
** my_strcat.c
*/

char *my_strcat(char *dest, char const *src)
{
    int dest_len = 0;
    int i = 0;

    while (dest[dest_len] != '\0')
        dest_len++;
    while (src[i] != '\0') {
        dest[dest_len + i] = src[i];
        i++;
    }
    dest[dest_len + i] = '\0';
    return dest;
}
