# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mozer <mozer@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/07 14:44:38 by mozer             #+#    #+#              #
#    Updated: 2023/03/09 14:18:39 by mozer            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Account
CC = c++
FLAG = -Wall -Werror -Wextra -std=c++98

all : 
	@$(CC) *.cpp $(FLAG) -o $(NAME)
	@echo "\033[1;32m     [OK]"
	
clean : 
		@clear
		@echo "\033[1;35m[🧹...Temizlendi...🧹]"
		@rm -rf $(NAME)
		@rm -rf $(NAME).dSYM

fclean : clean
		@rm -rf $(NAME)
		@rm -rf $(NAME).dSYM

re : fclean all 
	

.PHONY: all clean fclean re