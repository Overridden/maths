##
## Makefile for avm in /home/nguye_1/rendu/cpp_abstractvm
## 
## Made by Alexandre NGUYEN
## Login   <nguye_1@epitech.net>
## 
## Started on  Sun Mar  2 20:34:34 2014 Alexandre NGUYEN
## Last update Mon Mar  3 15:00:28 2014 Alexandre NGUYEN
##

NAME	=	202invendus

CFLAGS	=	-W -Wall -Wextra -Werror

SRCS	=	invendu.cpp	\

OBJS	=	$(SRCS:.cpp=.o)

CC	=	g++

RM	=	rm -rf

all:	$(NAME)

$(NAME):	$(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean:
	$(RM) $(OBJS)
	$(RM) $(NAME)

re:	fclean all
