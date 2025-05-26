FILE_C =	ft_puthex.c	ft_putptr.c	ft_putuni.c	ft_printf.c\
	ft_putchar.c	ft_putnbr.c	ft_putstr.c

OBJS = ${FILE_C:%.c=%.o}

NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

AR = ar rcs

RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean

