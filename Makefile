##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## makef
##

SRC	=	src/fs_open_file.c		\
		src/error_handler.c		\
		src/main.c				\
		src/my_engine.c				\
		src/malloc_array.c		\
		src/square.c


OBJ	=	$(SRC:.c=.o)

LDFLAGS	=	-L./lib/my -lmy

CPPFLAGS	=	-I./includes

CLFAGS	=	-W -Wall -Wextra

NAME	=	bsq

all:	$(NAME)

$(NAME):	 $(OBJ)
			make -C lib/my re
			gcc -o $(NAME) $(OBJ) $(CPPFLAGS) $(LDFLAGS) $(CFLAGS) -g3

clean:
			cd lib/my/ && make fclean
			rm -f *.gcno
			rm -f *.gcda
			rm -f $(OBJ)

fclean:	clean
			rm -f $(NAME)

re:	clean fclean all