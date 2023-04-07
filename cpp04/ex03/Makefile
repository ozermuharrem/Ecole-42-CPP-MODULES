# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mozer <mozer@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/07 12:40:59 by mozer             #+#    #+#              #
#    Updated: 2023/04/07 12:40:59 by mozer            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = AMaterial
CC = c++
CLAFGS = -Wall -Wextra -Werror -Wshadow -std=c++98
SRCS = $(wildcard *.cpp)
OBJ = $(SRCS:.cpp = .o)

$(NAME): $(OBJ)
	@$(CC) $(CLAFGS) $(SRCS) -o $(NAME)
	@echo "\033[1;32m     [OK]\033[0m"

all: $(NAME)

clean:
	@rm -rf  $(NAME) *.dSYM
	@echo "\033[1;35m[🧹...Temizlendi...🧹]\033[0m"

fclean: clean


re: fclean all

debug : 
	$(CC) -g $(SRCS) -o $(NAME)
	lldb $(NAME)

.PHONY: all clean fclean re