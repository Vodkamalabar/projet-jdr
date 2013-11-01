NAME	= quete1

CC	= gcc

SRC	= main.c

OBJ	= $(SRC:.c=.o)

CFLAGS	+= -W -Wall -Wextra -Werror
CFLAGS	+= -ansi -pedantic
CFLAGS	+= -I.

LDFLAGS	=

RM	= rm -f

all	: $(NAME)

$(NAME)	: $(OBJ)
	$(CC) -o $(NAME) $(OBJ)

clean	:
	$(RM) $(OBJ) *~

fclean	: clean
	$(RM) $(NAME)

re	: fclean all

.PHONY	: all clean fclean re
