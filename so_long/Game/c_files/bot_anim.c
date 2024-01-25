/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bot_anim.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaptist <tbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 15:30:28 by tbaptist          #+#    #+#             */
/*   Updated: 2024/01/25 15:44:10 by tbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	bot_move(t_game *values, int x, int y, int bot_n)
{
	if (values->map[values->bot[bot_n].y + y][values->bot[bot_n].x + x] == 'P')
		lose_condition(values);
	if (values->map[values->bot[bot_n].y + y][values->bot[bot_n].x + x] == '0')
	{
		values->map[values->bot[bot_n].y][values->bot[bot_n].x] = '0';
		values->bot[bot_n].y += y;
		values->bot[bot_n].x += x;
		values->map[values->bot[bot_n].y][values->bot[bot_n].x] = 'B';
	}
	return (0);
}

void	b_list(t_game	*values, int n)
{
	int	bot_n;

	bot_n = 0;
	while (bot_n < values->b)
	{
		if (n == 0)
		{
			values->pic.mon_dir = 1;
			bot_move(values, 1, 0, bot_n);
		}
		if (n == 1)
		{
			values->pic.mon_dir = -1;
			bot_move(values, -1, 0, bot_n);
		}
		if (n == 2)
			bot_move(values, 0, 1, bot_n);
		if (n == 3)
			bot_move(values, 0, -1, bot_n);
		bot_n++;
	}
}

int	bot_delay(t_game	*values)
{
	static int	i = 0;
	int			n;

	if (i == 0)
		i = timer();
	if (timer() - i < 500)
		return (0);
	i = timer();
	n = rand() % 4;
	b_list(values, n);
	return (0);
}

void	close_pgm2(t_game *values)
{
	free_matrix(values->map);
	mlx_destroy_window(values->mlx, values->mlx_win);
	mlx_destroy_display(values->mlx);
	free(values->mlx);
	exit(EXIT_SUCCESS);
}
