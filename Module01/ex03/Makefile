CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

SRCS = *.cpp
OBJS = $(SRCS:.cpp=.o)

NAME = main

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)
	@echo "Successfully complied ./$(NAME)"

.cpp.o:
	@$(CC) $(CPPFLAGS) -c $(SRCS)

clean:
	@$(RM) $(OBJS)
	@echo "Successfully delete obj file"

fclean: clean
	@$(RM) $(NAME)
	@echo "Successfully delete ./$(NAME)"

re: fclean all

.PHONY: all clean fclean re
