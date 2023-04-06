# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mozer <mozer@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/10 12:33:04 by mozer             #+#    #+#              #
#    Updated: 2023/03/21 11:01:29 by mozer            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie
CC = c++
FLAG = -Wall -Werror -Wextra -std=c++98

all : 
	@$(CC) *.cpp $(FLAG) -o $(NAME)
	@echo "\033[1;32m     [OK]"
	
clean : 
		@echo "\033[1;35m[🧹...Temizlendi...🧹]"
		@rm -rf $(NAME)
		@rm -rf $(NAME).dSYM

fclean : clean
		@rm -rf $(NAME)
		@rm -rf $(NAME).dSYM

re : fclean all

.PHONY: all clean fclean re