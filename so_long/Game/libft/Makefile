NAME = libft.a

SRCS =  ft_isprint.c ft_memcmp.c ft_strdup.c ft_isalnum.c\
		ft_strlcat.c ft_strncmp.c ft_atoi.c ft_isalpha.c\
		ft_memcpy.c ft_strchr.c ft_substr.c ft_strjoin.c\
		ft_tolower.c ft_bzero.c ft_isascii.c ft_memcpy.c\
		ft_strlen.c ft_strrchr.c ft_calloc.c ft_strnstr.c\
		ft_toupper.c ft_isdigit.c ft_memchr.c ft_memset.c\
		ft_strtrim.c ft_putchar_fd.c ft_putstr_fd.c\
		ft_putnbr_fd.c ft_putendl_fd.c ft_striteri.c\
		ft_strmapi.c ft_split.c ft_itoa.c ft_memmove.c\
		ft_strlcpy.c ft_putvoid.c ft_puthex.c ft_putnbr.c\
		ft_putstr.c ft_putchar.c ft_printf.c ft_uuu.c\
		get_next_line.c get_next_line_utils.c\
		get_next_line_bonus.c get_next_line_utils_bonus.c


SRC_B = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c\
		ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c\
		ft_lstiter.c ft_lstmap.c

OBJS :=$(SRCS:.c=.o)

OBJS_B :=$(SRC_B:.c=.o)

CFLAGS = -Wall -Werror -Wextra

CC = cc

all: $(NAME)

bonus: $(OBJS_B)
	ar -crs $(NAME) $(OBJS_B)

$(NAME) : $(OBJS)
	ar -crs $@ $^

%.o : %.c
	gcc $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(OBJS_B)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
