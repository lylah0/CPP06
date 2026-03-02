# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lylrandr <lylrandr@student.42lausanne.ch>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/19 18:26:12 by lylrandr          #+#    #+#              #
#    Updated: 2026/03/02 16:44:07 by lylrandr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Serializer
CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98

SRC = main.cpp Functions.cpp Base.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
