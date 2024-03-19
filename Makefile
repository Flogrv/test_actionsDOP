##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Makefile
##

INC= 		./include

TEST = 		./tests/

TEST_FILE = unit_tests

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
	rm -f $(OBJ) $(NAME) $(TEST_FILE)

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ) $(CFLAGS) $(LDFLAGS)

fclean: clean
	make -C ./lib/my fclean
	rm -f $(NAME) $(OBJ)

re: 	fclean all
	make -C ./lib/my re

unit_tests: clean libmy.a
	gcc -o $(TEST_FILE) $(CFLAGS) $(LDFLAGS) \
	--coverage -lcriterion

tests_run: unit_tests 
	./unit_tests
	make fclean

.PHONY: tests_run fclean clean
