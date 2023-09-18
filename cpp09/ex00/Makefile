NAME = btc
CC = c++
STD = -std=c++98
CLAFGS = -Wall -Wextra -Werror -Wshadow
SRCS = $(wildcard *.cpp)
OBJ = $(SRCS:.cpp = .o)

	ifeq ($(shell uname), Darwin)
    	$(CLAFGS) += $(STD)
	endif
$(NAME): $(OBJ)
	@$(CC) $(CLAFGS) $(SRCS) -o $(NAME)
	@echo "\033[1;32m     [OK]\033[0m"

all: $(NAME)

clean:
	@rm -rf  $(NAME) *.dSYM
	@echo "\033[1;35m[🧹...Temizlendi...🧹]\033[0m"

fclean: clean


re: fclean all

.PHONY: all clean fclean re