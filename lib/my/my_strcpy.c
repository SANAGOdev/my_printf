/*
** EPITECH PROJECT, 2023
** day06
** File description:
** my_strcpy.c
*/

char *my_strcpy(char *dest, char *src)
{
    int i = 0;

    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i++] = '\0';
    return dest;
}
