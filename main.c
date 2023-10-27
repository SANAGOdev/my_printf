/*
** EPITECH PROJECT, 2023
** myprintf
** File description:
** main.c
*/

#include "my.h"
#include <stdio.h>

////////////////////////////* TESTS : %n *///////////////////////////////////////////
int main(void)
{
    int i;
    char *hitler = "hitler";
    
    printf("ca%Xca%sbbb%n  : ", "caca", hitler, &i);
    printf("%d\n", i);
    my_printf("ca%Xca%sbbb%n  : ", "caca", hitler, &i);
    my_printf("%d\n", i);

    return 0;
}
/////////////////////////////////////////////////////////////////////////////////////

// int main(void)
// {
//     int a = 158;
//     // printf("[%#.2f]", 727.72);
//     // printf("[%d]\n", my_intlen(153));
//     printf("[%p]\n", &a);
//     my_printf("[%p]\n", &a);
//     return 0;
// }
