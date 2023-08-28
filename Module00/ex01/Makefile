CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

SRCS = *.cpp

NAME = phonebook

all: ${NAME}

${NAME}:
	@${CC} ${CFLAGS} ${SRCS} -o ${NAME}
	@echo "Successfully compile ./${NAME}"

clean:
	@${RM} ${NAME}
	@echo "Successfully delete compile file ./${NAME}"

re: clean all

.PHONY: all clean re