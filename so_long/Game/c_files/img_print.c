/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   img_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaptist <tbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 17:11:56 by tbaptist          #+#    #+#             */
/*   Updated: 2024/01/25 13:26:58 by tbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	more_put_img(t_game *values, int y, int x)
{
	if (values->map[y][x] == 'E')
	{
		if (values->ccopy == 0)
		{
			mlx_put_image_to_window(values->mlx, values->mlx_win,
				values->pic.golden[6], x * 64, y * 64);
			return ;
		}
		mlx_put_image_to_window(values->mlx, values->mlx_win,
			values->pic.ghost[6], x * 64, y * 64);
	}
	if (values->map[y][x] == 'B')
		mlx_put_image_to_window(values->mlx, values->mlx_win,
			values->pic.monster, x * 64, y * 64);
}

void	put_img(t_game *values, int y, int x)
{
	char	*str;

	str = ft_itoa(values->m);
	mlx_string_put(values->mlx, values->mlx_win, 10, 20, 0xffffffff, str);
	free(str);
	mlx_put_image_to_window(values->mlx, values->mlx_win,
		values->pic.theo, values->px * 64, values->py * 64);
	if (values->map[y][x] == '0')
		mlx_put_image_to_window(values->mlx, values->mlx_win,
			values->pic.grass, x * 64, y * 64);
	if (values->map[y][x] == '1')
		mlx_put_image_to_window(values->mlx, values->mlx_win,
			values->pic.wall, x * 64, y * 64);
	if (values->map[y][x] == 'C')
		mlx_put_image_to_window(values->mlx, values->mlx_win,
			values->pic.red[7], x * 64, y * 64);
	more_put_img(values, y, x);
}

void	print_images(t_game	*values)
{
	int	y;
	int	x;

	y = 0;
	while (values->map[y])
	{
		x = 0;
		while (values->map[y][x])
		{
			put_img(values, y, x);
			x++;
		}
		y++;
	}
}

int	animations(t_game	*values)
{
	red_anim(values);
	ghost_anim(values);
	golden_anim(values);
	bot_delay(values);
	return (0);
}
