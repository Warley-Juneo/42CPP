# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/08 13:39:10 by wjuneo-f          #+#    #+#              #
#    Updated: 2022/09/08 13:43:59 by wjuneo-f         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = tests.cpp Account.cpp
OBJ = $(SRC:.cpp=.o)

CC = g++
CFLAGS = -std=c++98 -Wall -Wextra -Werror

NAME = bank

all: 		$(NAME)

$(NAME):	$(OBJ)
			$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
			rm -rf $(OBJ)

fclean: clean
			rm -rf $(NAME)

re: 		fclean all

.PHONY: 	all clean fclean re
