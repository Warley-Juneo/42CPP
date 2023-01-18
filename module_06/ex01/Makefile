# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/05 10:56:05 by wjuneo-f          #+#    #+#              #
#    Updated: 2023/01/08 15:20:32 by wjuneo-f         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp Serialization.cpp
OBJ = $(SRC:.cpp=.o)

CC = g++
CFLAGS = -std=c++98 -g3

NAME = ./serialization

all:	$(NAME)

%.o: %.cpp
		$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJ)
		$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
		rm -rf $(OBJ)

fclean: clean
		rm -rf $(NAME)

re:	fclean all

.PHONY: all clean fclean re
