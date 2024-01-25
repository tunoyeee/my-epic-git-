/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_hooks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaptist <tbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 18:16:58 by tbaptist          #+#    #+#             */
/*   Updated: 2024/01/25 14:26:47 by tbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

//Moves the player to each direction and checks if the player won
void	move(t_game	*values, int x, int y)
{
	if (x == 1)
		values->direct = 1;
	if (x == -1)
		values->direct = -1;
	if (values->direct == 1)
		values->pic.theo = values->pic.theo_r[values->pic.frame++ % 7];
	if (values->direct == -1)
		values->pic.theo = values->pic.theo_l[values->pic.frame++ % 7];
	if ((values->map[values->py + y][values->px + x]) == 'C')
		values->ccopy--;
	if (values->map[values->py + y][values->px + x] == 'B')
		lose_condition(values);
	if (((values->map[values->py + y][values->px + x]) == 'E') &&
		(values->ccopy == 0))
		win_condition(values);
	if (((values->map[values->py + y][values->px + x]) == '0') ||
		((values->map[values->py + y][values->px + x]) == 'C'))
	{
		values->map[values->py][values->px] = '0';
		values->py += y;
		values->px += x;
		values->map[values->py][values->px] = 'P';
		values->m++;
	}
	print_images(values);
}

//receives the input from the player
int	key_press(int keycode, t_game *values)
{
	if (keycode == 119)
		move(values, 0, -1);
	if (keycode == 115)
		move(values, 0, 1);
	if (keycode == 100)
		move(values, 1, 0);
	if (keycode == 97)
		move(values, -1, 0);
	if (keycode == 65307)
		close_pgm(values);
	return (0);
}
