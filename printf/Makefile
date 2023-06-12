NAME = libftprintf.a

SRCS = 	ft_putvoid.c		ft_puthex.c	 	ft_putnbr.c		\
		ft_putstr.c 		ft_putchar.c	ft_printf.c		\
		ft_uuu.c
		
OBJS :=$(SRCS:.c=.o)

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME) : $(OBJS)
	ar -crs $@ $^

%.o : %.c
	cc $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re