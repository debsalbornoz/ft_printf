CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS =  ft_putchar.c ft_putstr.c ft_print_decimal.c ft_print_hexadecimal.c ft_printf.c ft_print_pointer.c ft_unsigned.c
OBJS = $(SRCS:.c=.o)
NAME = libftprintf.a

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -I . -c $< -o $@
	ar rcs $(NAME) $@

$(NAME): $(OBJS)

clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:	all clean fclean re