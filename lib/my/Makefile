##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## makef
##

SRC	=	hex_decimal_capitalize.c	\
		b_flags.c	\
		o_flags.c	\
		u_flags.c	\
		bigx_flags.c	\
		x_flags.c	\
		s_flags.c	\
		i_flags.c	\
		d_flags.c	\
		c_flags.c	\
		my_printf.c	\
		put_unsigned_nbr.c	\
		put_binary_nbr.c	\
		my_putstr.c			\
		my_putchar.c		\
		my_put_octal.c		\
		my_put_nbr.c		\
		hex_decimal.c		\
		my_put_pointer.c	\
		pourcent_flags.c	\
		my_strlen.c			\
		my_getnbr.c


OBJ	=	$(SRC:.c=.o)

CLFAGS	=	-W -Wall -Wextra

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	 $(OBJ)
			ar rc $(NAME) $(OBJ) $(CFLAGS)

clean:
			rm -f *.gcno
			rm -f *.gcda
			rm -f $(OBJ)

fclean:	clean
			rm -f $(NAME)

re:	clean fclean all