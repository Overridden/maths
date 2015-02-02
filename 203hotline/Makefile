##
## Makefile for 203 in /home/nguye_1/rendu/203hotline
## 
## Made by Alexandre NGUYEN
## Login   <nguye_1@epitech.net>
## 
## Started on  Fri Mar 28 17:35:41 2014 Alexandre NGUYEN
## Last update Sat Mar 29 21:19:26 2014 Alexandre NGUYEN
##

SOURCES =	hotline.cpp	\
		tutorial.cpp	\
		sdlglutils.cpp	\
		freeflycamera.cpp\
		vector3d.cpp	\
		objects.cpp

OBJECTS	=	$(SOURCES:.cpp=.o)

TARGET	=	203hotline

LIBS	=	$(shell sdl-config --libs) -lSDL_image -lGL -lGLU 

all: $(OBJECTS)
	g++ $(LIBS) -o $(TARGET) $(OBJECTS)

%o: %cpp
	g++ -o $@ -c $<

x: all
	./$(TARGET)

clean:
	rm -rf $(OBJECTS)

fclean:	clean
	rm -rf $(TARGET)

re:	fclean all

