# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbaptist <tbaptist@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/19 15:47:54 by tbaptist          #+#    #+#              #
#    Updated: 2024/01/25 16:40:39 by tbaptist         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long

#----------LIBRARIES----------#

LIBFT_PATH = ./libft/
LIBFT = $(LIBFT_PATH)libft.a
MLX_PATH = ./mlx_linux/
MLX = $(MLX_PATH)libmlx_Linux.a

#----------SRCS and FLAGS----------#

CC = cc
CFLAGS = -Wall -Werror -Wextra -g
OTHERFLAGS = -L$(LIBFT_PATH) -lft -L$(MLX_PATH) -lmlx_Linux -lXext -lX11 -lm -lz -o $(NAME)

SRCS =	./c_files/img_saver.c ./c_files/img_print.c ./c_files/main.c\
		./c_files/map_flood.c ./c_files/map_test.c ./c_files/map_values.c\
		./c_files/mlx_hooks.c ./c_files/so_long_utils.c ./c_files/anim.c\
		./c_files/bot_anim.c ./c_files/img_saver_plus.c
OBJS = $(SRCS:.c=.o)

#----------RULES----------#

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT) $(MLX) $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) $(OTHERFLAGS)

$(MLX):
	make -C $(MLX_PATH)

$(LIBFT):
	make -C $(LIBFT_PATH)

clean:
	make -C $(MLX_PATH) clean
	make -C $(LIBFT_PATH) clean
	rm -f $(OBJS)
fclean: clean
	make -C $(LIBFT_PATH) fclean

re: fclean all

.PHONY: all clean fclean re