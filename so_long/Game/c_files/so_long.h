/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaptist <tbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 18:47:24 by tbaptist          #+#    #+#             */
/*   Updated: 2024/01/25 17:43:32 by tbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "../mlx_linux/mlx.h"
# include "../mlx_linux/mlx_int.h"
# include "../libft/libft.h"
# include <unistd.h>
# include <fcntl.h>
# include <sys/time.h>

typedef struct s_bot
{
	int	x;
	int	y;
}	t_bot;

typedef struct s_pic
{
	int		frame;
	void	*grass;
	void	*wall;
	void	*ghost[7];
	int		fghost;
	void	*golden[7];
	int		fgolden;
	void	*red[8];
	int		fred;
	void	*theo_r[8];
	void	*theo_l[8];
	void	*theo;
	void	*temp;
	void	*monster;
	int		mon_dir;
}	t_pic;

typedef struct s_game
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
	void	*mlx_win;
	void	*mlx;
	int		m;
	int		direct;
	int		b;
	t_bot	bot[100000];
	t_pic	pic;
}	t_game;

//img_saver.c
void			saver(t_game *values);
void			golden_saver(t_game *values, int x, int y);
void			red_saver(t_game *values, int x, int y);
void			more_saver(t_game *values, int x, int y);
void			even_more_saver(t_game *values, int x, int y);

//print_img.c
void			put_img(t_game *values, int x, int y);
void			print_images(t_game *values);
int				animations(t_game *values);
//main.c
void			map_extension(char	*argv);
void			free_matrix(char **str);
int				main(int argc, char **argv);
//map_flood.c
void			ft_flood(t_game *values, int x, int y, char **n_map);
void			flood_map_copy(t_game *values);
//map_test.c
void			map_save(char *argv, t_game *values);
void			map_save2(t_game *values, char *long_s);
void			rectangle_check(t_game *values);
void			h_walls_check(t_game *values);
void			v_walls_check(t_game *values);
void			check_map(char *str);
//map_values.c
void			new_bot(int x, int y, t_game *values);
void			values_errors(t_game *values);
void			values_track(t_game *values);
//mlx_hooks.c
int				key_press(int keycode, t_game	*values);
void			move(t_game	*values, int x, int y);
//so_long_utils.c
void			close_pgm(t_game *values);
void			close_pgm2(t_game *values);
void			win_condition(t_game *values);
void			map_tester(t_game *values, char argv[1]);
void			lose_condition(t_game	*values);
//anim1.c
unsigned int	timer(void);
int				golden_anim(t_game	*values);
int				ghost_anim(t_game *values);
int				red_anim(t_game	*values);
//bot_anim.c
int				bot_move(t_game *values, int x, int y, int bot_n);
int				bot_delay(t_game *values);

#endif