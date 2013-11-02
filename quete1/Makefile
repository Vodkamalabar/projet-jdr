NAME	= quete1

CC	= gcc

SRC	= main.c			\
	attack.c			\
	display_prompt.c		\
	fire.c				\
	initialization_hero.c		\
	initialization_monster.c	\
	libra.c				\
	process_action.c		\
	quit.c				\
	readline.c			\
	slash.c				\
	stat.c				\
	thunder.c

OBJ	= $(SRC:.c=.o)

CFLAGS	+= -W -Wall -Wextra -Werror
CFLAGS	+= -ansi -pedantic
CFLAGS	+= -I.

LDFLAGS	= -L. -lmy

RM	= rm -f

all	: $(NAME)

$(NAME)	: $(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

clean	:
	$(RM) $(OBJ) *~

fclean	: clean
	$(RM) $(NAME)

re	: fclean all

.PHONY	: all clean fclean re
