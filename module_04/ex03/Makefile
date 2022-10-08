SRC = main.cpp MateriaSource.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp
OBJ = $(SRC:.cpp=.o)

CC = g++
CFLAGS = -std=c++98 -g3

NAME = interface

all: 		$(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJ)
			$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
			rm -rf $(OBJ)

fclean: clean
			rm -rf $(NAME)

re: 		fclean all

.PHONY: 	all clean fclean re
