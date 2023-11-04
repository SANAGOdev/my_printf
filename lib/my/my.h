/*
** EPITECH PROJECT, 2023
** day07
** File description:
** my
*/

#ifndef MY_H_
    #define MY_H_
    #include <unistd.h>
    #include <stdlib.h>
    #include <stdarg.h>
int my_putchar(char c);
int my_isneg(int nb);
int my_put_nbr(int nb);
void my_swap(int *a, int *b);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
void my_sort_int_array(int *tab, int size);
int my_compute_power_rec(int nb, int power);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
char *my_strstr(char *str, char const *to_find);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
int my_show_word_array(char const **tab);
char **my_str_to_word_array(const char *str);
char *my_strdup(const char *src);
int ascii_sort(char c);
int my_printf(const char *format, ...);
int my_put_octal(int nb);
char *my_strupcase(char *str);
int my_put_hex_lower(int nb);
int my_put_hex_upper(int nb);
int my_put_pointer(void *ptr);
int my_put_unsigned_int(unsigned int nb);
int my_put_float(double nb);
int my_putlong_float(long nb, char *num_list);
int my_intlen(int nb);
int my_put_bin(int nb);
void my_put_e(double nb);
void my_put_e_upper(double nb);

#endif /* !MY_H_ */
