##
## Makefile for 209sondage in /home/clariv_e//Projets/Math/209sondage
## 
## Made by erick clarivet
## Login   <clariv_e@epitech.net>
## 
## Started on  Mon Jun 11 06:04:41 2012 erick clarivet
## Last update Mon Jun 11 06:06:41 2012 erick clarivet
##

NAME	=	209sondage

SRC	=	209sondage.cpp \
		main.cpp

OBJ	=	$(SRC:.cpp=.o)

$(NAME):	$(OBJ)
		g++ -o $(NAME) $(OBJ) -lm

clean:
		rm -f *~
		rm -f *#
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean $(NAME)