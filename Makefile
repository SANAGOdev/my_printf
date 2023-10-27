##
## EPITECH PROJECT, 2022
## makefile
## File description:
## builder
##

CC = gcc

CFLAGS = -Wall -Wextra -Iinclude

LIB_PATH = lib/my/

SRC = \
	$(LIB_PATH)my_compute_power_rec.c \
	$(LIB_PATH)my_compute_square_root.c \
	$(LIB_PATH)my_is_prime.c \
	$(LIB_PATH)my_getnbr.c \
	$(LIB_PATH)my_isneg.c \
	$(LIB_PATH)my_put_nbr.c \
	$(LIB_PATH)my_putchar.c \
	$(LIB_PATH)my_putstr.c \
	$(LIB_PATH)my_revstr.c \
	$(LIB_PATH)my_show_word_array.c \
	$(LIB_PATH)my_strcat.c \
	$(LIB_PATH)my_strcmp.c \
	$(LIB_PATH)my_strcpy.c \
	$(LIB_PATH)my_strdup.c \
	$(LIB_PATH)my_strlen.c \
	$(LIB_PATH)my_strncat.c \
	$(LIB_PATH)my_strncpy.c \
	$(LIB_PATH)my_swap.c \
	$(LIB_PATH)my_sort_int_array.c \
	$(LIB_PATH)my_str_to_word_array.c \
	$(LIB_PATH)my_find_prime_sup.c \
	$(LIB_PATH)my_strstr.c \
	$(LIB_PATH)my_strncmp.c \
	$(LIB_PATH)my_printf.c \
	$(LIB_PATH)my_put_octal.c \
	$(LIB_PATH)my_strupcase.c \
	$(LIB_PATH)my_put_hex_lower.c \
	$(LIB_PATH)my_put_hex_upper.c \
	$(LIB_PATH)my_put_pointer.c \
	$(LIB_PATH)my_put_unsigned_int.c \
	$(LIB_PATH)my_put_float.c \
	$(LIB_PATH)my_put_long_float.c \
	$(LIB_PATH)my_intlen.c \

HEADER = my.h

OBJ = $(SRC:.c=.o)

NAME = libmy

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME).a $(OBJ)
	cp $(LIB_PATH)$(HEADER) ./include/
	@echo -e "\033[32m[OK]\033[0m": $(NAME)

clean:
	@rm -f $(OBJ)
	@rm -f coding-style-reports.log
	@rm -f *.gcno *.gcda *.gcov vgcore.*
	@echo -e "\033[31m[RM]\033[0m": $(OBJ)

fclean: clean
	@rm -f ../$(NAME).a
	@rm -f $(NAME).a
	@echo -e "\033[31m[RM]\033[0m": $(NAME)

re: fclean all

.PHONY: all clean fclean re
