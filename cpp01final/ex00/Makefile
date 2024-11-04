# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fkuruthl <fkuruthl@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/04 03:17:17 by fkuruthl          #+#    #+#              #
#    Updated: 2024/11/04 03:17:19 by fkuruthl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Program
NAME := zombie

# Necessities
CXX := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++98

# Targets
SRC := main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

# Rules
all: $(NAME)

$(NAME): $(SRC)
	$(CXX) $(CXXFLAGS) -o $@  -I. $(SRC)

clean:
	rm -rf $(NAME)

re: clean all