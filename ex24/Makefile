NAME=libft.a
SRCS=srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c \
srcs/ft_strlen.c srcs/ft_swap.c
OBJECTS=ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
HEADERS_FOLDER=./includes

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRCS) -I$(HEADERS_FOLDER)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
