##
## Makefile for Make in /home/moriss_h//afs/rendu/lib/my
## 
## Made by hugues morisset
## Login   <moriss_h@epitech.net>
## 
## Started on  Mon Oct 22 09:20:28 2012 hugues morisset
## Last update Sat Dec  8 21:54:44 2012 Hugues
##

SRC=	robert_r.c

CFLAGS=

OBJ= $(SRC:.c=.o)

NAME= robert_r

INVOCATION= cc

all:	$(NAME)

$(NAME):	$(OBJ)
		$(INVOCATION) $(OBJ) -o $(NAME) $(LIBOS)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
