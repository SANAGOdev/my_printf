/*
** EPITECH PROJECT, 2023
** day05
** File description:
** my_is_prime.c
*/

int my_is_prime(int nb)
{
    if (nb <= 1)
        return 0;
    if (nb == 2)
        return 1;
    if (nb % 2 == 0)
        return 0;
    for (int i = 3; i * i <= nb; i += 2) {
        if (nb % i == 0)
            return 0;
    }
    return 1;
}
