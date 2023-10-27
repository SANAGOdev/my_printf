/*
** EPITECH PROJECT, 2023
** day05
** File description:
** my_compute_power_rec.c
*/

int my_compute_power_rec(int nb, int p)
{
    if (p == 0)
        return 1;
    if (p < 0 || p > 12)
        return 0;
    if (p > 1)
        return nb * my_compute_power_rec(nb, p - 1);
    else
        return nb;
}
