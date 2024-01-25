/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   img_saver.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaptist <tbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:01:45 by tbaptist          #+#    #+#             */
/*   Updated: 2024/01/24 15:51:24 by tbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	saver(t_game *values)
{
	int	x;
	int	y;

	x = 64;
	y = 64;
	values->pic.grass = mlx_xpm_file_to_image(values->mlx,
			"img/grass.xpm", &x, &y);
	values->pic.wall = mlx_xpm_file_to_image(values->mlx,
			"img/wall.xpm", &x, &y);
	values->pic.ghost[0] = mlx_xpm_file_to_image(values->mlx,
			"img/ghost/ghost0.xpm", &x, &y);
	values->pic.ghost[1] = mlx_xpm_file_to_image(values->mlx,
			"img/ghost/ghost1.xpm", &x, &y);
	values->pic.ghost[2] = mlx_xpm_file_to_image(values->mlx,
			"img/ghost/ghost2.xpm", &x, &y);
	values->pic.ghost[3] = mlx_xpm_file_to_image(values->mlx,
			"img/ghost/ghost3.xpm", &x, &y);
	values->pic.ghost[4] = mlx_xpm_file_to_image(values->mlx,
			"img/ghost/ghost4.xpm", &x, &y);
	values->pic.ghost[5] = mlx_xpm_file_to_image(values->mlx,
			"img/ghost/ghost5.xpm", &x, &y);
	values->pic.ghost[6] = values->pic.ghost[0];
	golden_saver(values, x, y);
	red_saver(values, x, y);
	more_saver(values, x, y);
}

void	golden_saver(t_game *values, int x, int y)
{
	values->pic.golden[0] = mlx_xpm_file_to_image(values->mlx,
			"img/golden/gm0.xpm", &x, &y);
	values->pic.golden[1] = mlx_xpm_file_to_image(values->mlx,
			"img/golden/gm1.xpm", &x, &y);
	values->pic.golden[2] = mlx_xpm_file_to_image(values->mlx,
			"img/golden/gm2.xpm", &x, &y);
	values->pic.golden[3] = mlx_xpm_file_to_image(values->mlx,
			"img/golden/gm3.xpm", &x, &y);
	values->pic.golden[4] = mlx_xpm_file_to_image(values->mlx,
			"img/golden/gm4.xpm", &x, &y);
	values->pic.golden[5] = mlx_xpm_file_to_image(values->mlx,
			"img/golden/gm5.xpm", &x, &y);
	values->pic.golden[6] = values->pic.golden[0];
}

void	red_saver(t_game *values, int x, int y)
{
	values->pic.red[0] = mlx_xpm_file_to_image(values->mlx,
			"img/red/m0.xpm", &x, &y);
	values->pic.red[1] = mlx_xpm_file_to_image(values->mlx,
			"img/red/m1.xpm", &x, &y);
	values->pic.red[2] = mlx_xpm_file_to_image(values->mlx,
			"img/red/m2.xpm", &x, &y);
	values->pic.red[3] = mlx_xpm_file_to_image(values->mlx,
			"img/red/m3.xpm", &x, &y);
	values->pic.red[4] = mlx_xpm_file_to_image(values->mlx,
			"img/red/m4.xpm", &x, &y);
	values->pic.red[5] = mlx_xpm_file_to_image(values->mlx,
			"img/red/m5.xpm", &x, &y);
	values->pic.red[6] = mlx_xpm_file_to_image(values->mlx,
			"img/red/m6.xpm", &x, &y);
	values->pic.red[7] = values->pic.red[0];
	values->pic.theo = mlx_xpm_file_to_image(values->mlx,
			"img/theo_stop_left.xpm", &x, &y);
	values->pic.temp = values->pic.theo;
}

void	more_saver(t_game *values, int x, int y)
{
	even_more_saver(values, x, y);
	values->pic.theo_l[0] = mlx_xpm_file_to_image(values->mlx,
			"img/theoleft/theoLR0.xpm", &x, &y);
	values->pic.theo_l[1] = mlx_xpm_file_to_image(values->mlx,
			"img/theoleft/theoLR1.xpm", &x, &y);
	values->pic.theo_l[2] = mlx_xpm_file_to_image(values->mlx,
			"img/theoleft/theoLR2.xpm", &x, &y);
	values->pic.theo_l[3] = mlx_xpm_file_to_image(values->mlx,
			"img/theoleft/theoLR3.xpm", &x, &y);
	values->pic.theo_l[4] = mlx_xpm_file_to_image(values->mlx,
			"img/theoleft/theoLR4.xpm", &x, &y);
	values->pic.theo_l[5] = mlx_xpm_file_to_image(values->mlx,
			"img/theoleft/theoLR5.xpm", &x, &y);
	values->pic.theo_l[6] = mlx_xpm_file_to_image(values->mlx,
			"img/theoleft/theoLR6.xpm", &x, &y);
	values->pic.theo_l[7] = mlx_xpm_file_to_image(values->mlx,
			"img/theoleft/theoLR7.xpm", &x, &y);
	values->pic.monster = mlx_xpm_file_to_image(values->mlx,
			"img/monster/monster_left.xpm", &x, &y);
}
