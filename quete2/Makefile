##
## Makefile for ragnarok in /Users/julienbulot/Documents/projet-jdr/quete1
## 
## Made by BULOT Julien
## Login   <bulot_j@etna-alternance.net>
## 
## Started on  Sat Nov  2 13:32:21 2013 BULOT Julien
## Last update Sat Nov  2 13:32:26 2013 BULOT Julien
##

NAME	= ragnarok

CC	= gcc

SRC	= main.c			\
	attack.c			\
	attack_hero.c			\
	attack_monster.c		\
	bite.c				\
	cant_attack.c			\
	display_prompt.c		\
	doom.c				\
	earthquake.c			\
	fire.c				\
	initialization_hero.c		\
	initialization_monster.c	\
	libra.c				\
	process_action.c		\
	readline.c			\
	slash.c				\
	stat.c				\
	thunder.c			\
	win.c

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
