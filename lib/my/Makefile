##
## EPITECH PROJECT, 2022
## makefile
## File description:
## Builder
##

SRC = my_putchar.c\
      my_put_nbr.c\
      my_putstr.c\
      my_strlen.c\
      my_put_float.c\

HEADER = my.h

OBJ = $(SRC:.c=.o)

NAME = libmy.a

all:	$(NAME)

$(NAME):       $(OBJ)
	ar rc $(NAME) $(OBJ)
	cp $(HEADER) ../../include
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
re: fclean all
