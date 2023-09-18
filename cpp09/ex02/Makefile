NAME = PmergeMe
CC = c++
STD = -std=c++98
CLAFGS = -Wall -Wextra -Werror -Wshadow
SRCS = $(wildcard *.cpp)
OBJ = $(SRCS:.cpp = .o)

	ifeq ($(shell uname), Darwin)
		CLAFGS += $(STD)
	endif
$(NAME): $(OBJ)
	@$(CC) $(CLAFGS) $(SRCS) -o $(NAME)
	@echo "\033[1;32m     [OK]\033[0m"

all: $(NAME)

clean:
	@rm -rf  $(NAME) *.dSYM build
	@echo "\033[1;35m[🧹...Temizlendi...🧹]\033[0m"

fclean: clean

re: fclean all

ifeq ($(shell uname), Darwin)
test:
	./$(NAME) `jot -r 3000 1 100000 | tr '\n' ' '`
else
test:
	./$(NAME) `shuf -i 1-100000 -n 3000 | tr "\n" " "`
endif


.PHONY: all clean fclean re test