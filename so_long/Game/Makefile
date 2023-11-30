# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbaptist <tbaptist@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/19 15:47:54 by tbaptist          #+#    #+#              #
#    Updated: 2023/11/15 16:44:33 by tbaptist         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long


SRCS = main.c flood.c map_path_collec.c map_rec_walls.c 

#----------LIBRARIES----------#

LIBFT_PATH = ./libft/
LIBFT = $(LIBFT_PATH)libft.a
MLX_PATH = ./mlx_linux/
MLX = $(MLX_PATH)libmlx_Linux.a

#----------SRCS and FLAGS----------#

CC = cc
CFLAGS = -Wall -Werror -Wextra
OTHERFLAGS = -L$(LIBFT_PATH) -lft -L$(MLX_PATH) -lmlx_Linux -lXext -lX11 -lm -lz -o $(NAME)

SRCS = ./map_path_collec.c ./map_rec_walls.c ./main.c ./flood.c
OBJS = $(SRCS:.c=.o)
#----------RULES----------#
all: $(NAME)

$(NAME): $(OBJS) $(LIBFT) $(MLX) $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) $(OTHERFLAGS)

$(MLX):
	-C $(MLX_PATH)

$(LIBFT):
	-C $(MLX_PATH)

clean:
	-C $(MLX_PATH) clean
	-C $(LIBFT_PATH) clean
	rm -f $(OBJS)
fclean: clean
	-C $(LIBFT_PATH) fclean

re: fclean all

.PHONY: all clean fclean re