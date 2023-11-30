/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaptist <tbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 18:47:24 by tbaptist          #+#    #+#             */
/*   Updated: 2023/11/23 21:17:00 by tbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "./mlx_linux/mlx.h"
# include "./libft/libft.h"
# include <unistd.h>
# include <fcntl.h>

typedef struct s_game_v
{
	char	**map;
	int		max_x;
	int		max_y;
	int		e;
	int		ecopy;
	int		p;
	int		c;
	int		ccopy;
	int		px;
	int		py;
}	t_game;

//main.c
int	map_extension(char	*argv);
int	main(int	argc, char	**argv);
void	free_matrix(char **str);
//map_path_collec.c
void values_track(t_game *values);
//map_rec_walls.c
void	save_line(char *argv, t_game *values);
int	rectangle_check(t_game *values);
int	h_walls_check(t_game *values);
int	v_walls_check(t_game *values);
//flood.c
void	ft_flood(t_game *values, int x, int y, char **n_map);
void	map_copy(t_game *values);

#endif