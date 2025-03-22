# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-atti <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/19 02:40:44 by mel-atti          #+#    #+#              #
#    Updated: 2025/02/19 02:40:51 by mel-atti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Horde

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = Zombie.cpp main.cpp zombieHorde.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
