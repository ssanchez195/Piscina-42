CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = bsq

MY_SOURCES = main.c

MY_OBJECTS = $(MY_SOURCES:.c=.o)

all : $(NAME)

$(NAME):$(MY_OBJECTS)
	$(CC) $(CFLAGS) -o $(NAME) $(MY_OBJECTS)

fclean:
	@echo "Limpiando archivos..."
	rm -f $(NAME)
	rm -f *.o
	@echo "Se han borrado los archivos"

re: fclean all