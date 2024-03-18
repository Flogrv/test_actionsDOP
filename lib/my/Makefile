##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Makefile
##

INC = 	include/

SRC	= 	my_putstr.c \
		my_putchar.c \
		mini_printf.c \
		my_put_nbr.c \
		my_strlen.c \
		my_strdup.c \
		my_strcpy.c \
		my_strcat.c \
		my_strncpy.c \
		my_strcmp.c \
		my_strndup.c \
		my_str_isnum.c \
		my_str_to_word_array.c \
		my_isnum.c \
		my_strncmp.c \
		my_strstr.c \


OBJ	=	$(SRC:.c=.o)

NAME 	= libmy.a

all: 	$(NAME)

$(NAME): 	$(OBJ)
	ar rc $(NAME) $(OBJ)
	cp my.h ../../$(INC)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: 	fclean all
