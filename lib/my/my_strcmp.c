/*
** EPITECH PROJECT, 2023
** day07
** File description:
** my_strcmp.c
*/

int my_strcmp(char const *s1, char const *s2)
{
    while (*s1 && *s2 && *s1 == *s2) {
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}
