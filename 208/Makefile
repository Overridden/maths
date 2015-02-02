NAME 	= 208chevillettes

SRCS	= main.c	\
	donnes_x2.c	\
	fonc.c		\

OPTI	= -O3 -os

IPATH   = -I./include -I./src/proc
OBJOPT  = $(OPTI) -W -Wall -Werror -Wextra -ansi -pedantic
CFLAGS  = $(OBJOPT) $(IPATH)
CXXFLAGS= $(CFLAGS)

LPATH   = -L. -lm -lgmpxx -lgmp

RM 	= /bin/rm -f

CC 	= g++

OBJS 	= $(SRCS:.c=.o)

.PHONY		: clean fclean re

all		: $(NAME)

$(NAME)		: $(OBJS)
	$(CC) $(OBJS) $(LPATH) $(LDFLAGS) -o $(NAME)

clean		:
	$(RM) *~
	$(RM) *.o

fclean		: clean
	$(RM) $(NAME)

re		: fclean all
