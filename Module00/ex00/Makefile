CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

SRC = *.cpp

NAME = megaphone

all: ${NAME}

${NAME}:
	@${CC} ${CFLAGS} ${SRC} -o ${NAME}
	@echo "Successfully create ./${NAME}"
clean:
	@${RM} ${NAME}
	@echo "Successfully delete ./${NAME}"

re: clean all

.PHONY: all clean re