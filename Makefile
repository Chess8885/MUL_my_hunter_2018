##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##

SRC	=	src/main.c		\
		src/help.c		\
		src/print.c     	\
		src/init.c		\
		src/draw_and_loop.c	\
		src/score.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-Wall -Wextra -I ./include

NAME	=	my_hunter

all:		$(NAME)

$(NAME):	$(OBJ)
	gcc $(CFLAGS) -o $(NAME) $(OBJ) -l csfml-graphics -l csfml-audio -l csfml-system -l csfml-window

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
