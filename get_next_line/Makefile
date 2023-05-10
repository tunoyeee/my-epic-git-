NAME = get_next_line

SRCS =	get_next_line.c get_next_line_utils.c

OBJS :=$(SRCS:.c=.o)

CFLAGS = -Wall -Werror -Wextra

CC = cc

all: $(NAME)

$(NAME) : OBJS
	ar -crs $@ $^

%.o : %.c
	gcc $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(OBJS_B)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus