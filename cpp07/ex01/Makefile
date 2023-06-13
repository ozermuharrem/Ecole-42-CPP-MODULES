NAME = Iter
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
	@rm -rf *_shrubbery
	@echo "\033[1;35m[🧹...Temizlendi...🧹]\033[0m"

fclean: clean


re: fclean all

debug : 
	$(CC) -g $(SRCS) -o $(NAME)
	lldb $(NAME)

.PHONY: all clean fclean re