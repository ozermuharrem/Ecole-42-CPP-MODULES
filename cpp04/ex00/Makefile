
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mozer <mozer@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/05 10:10:30 by mozer             #+#    #+#              #
#    Updated: 2023/04/05 14:52:47 by mozer            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Animal
CC = c++
CLAFGS = -Wall -Wextra -Werror -Wshadow -std=c++98
SRCS = $(wildcard *.cpp)
OBJ = $(SRCS:.cpp = .o)

$(NAME): $(OBJ)
	@$(CC) $(CLAFGS) $(SRCS) -o $(NAME)
	@echo "\033[1;32m     [OK]\033[0m"

all: $(NAME)

clean:
	@rm -rf  $(NAME)
	@echo "\033[1;35m[🧹...Temizlendi...🧹]\033[0m"

fclean: clean


re: fclean all

.PHONY: all clean fclean re