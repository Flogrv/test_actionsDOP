##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Makefile
##

INC= 		./include

TEST = 		./tests/

CFLAGS  +=	-Wall -Wextra -I ./include
LDFLAGS += 	-Llib/my -l my

SRC = main.c \

OBJ = $(SRC:.c=.o)

NAME = asm

all: libmy.a $(NAME)

libmy.a:
	make -C ./lib/my

clean:
	make -C ./lib/my clean

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ) $(CFLAGS) $(LDFLAGS)

fclean: clean
	make -C ./lib/my fclean
	rm $(NAME) $(OBJ)

re: 	fclean all
	make -C ./lib/my re

unit_tests: clean libmy.a
	gcc -o unit_tests $(CFLAGS) $(LDFLAGS) \
	--coverage -lcriterion

tests_run: unit_tests
	./unit_tests

.PHONY: tests_run fclean clean
