NAME = libft.a

SOURCES = ft_isalpha.c ft_isdigit.c ft_isalnum.c
SOURCES += ft_isascii.c ft_isprint.c ft_strlen.c
SOURCES += ft_tolower.c ft_toupper.c
SOURCES += ft_memset.c ft_bzero.c ft_memcpy.c
SOURCES += ft_memmove.c ft_strncmp.c ft_strlcpy.c
SOURCES += ft_strchr.c ft_strrchr.c ft_memchr.c
SOURCES += ft_strnstr.c ft_memcmp.c ft_strlcat.c
SOURCES += ft_strdup.c ft_calloc.c ft_atoi.c
SOURCES += ft_substr.c

OBJECTS = ${SOURCES:.c=.o}

INCLUDES = libft.h

RM = @rm -f

CC = cc

CFLAGS = -Wall -Wextra -Werror
MSG1 = @echo "42@compile ✔️\nCompiled and now is working! 🚂💨"
MSG2 = @echo "42@cleaned ✔️\nWe cleaned the floor and now there's no .o files! 🧹"

ARCHIVE = @ar -rc

RANLIB = @ranlib

$(NAME):	${OBJECTS}
			${ARCHIVE} ${NAME} ${OBJECTS}
			${RANLIB} ${NAME}
			${MSG1}

all: ${NAME}

clean:
		${RM}	${OBJECTS}
		${MSG2}

fclean: clean
		${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
