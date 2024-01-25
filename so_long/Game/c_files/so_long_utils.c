/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaptist <tbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 14:41:13 by tbaptist          #+#    #+#             */
/*   Updated: 2024/01/25 15:46:36 by tbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
//closes and frees eveything
void	close_pgm(t_game	*values)
{
	int	i;

	i = -1;
	mlx_destroy_image(values->mlx, values->pic.temp);
	mlx_destroy_image(values->mlx, values->pic.monster);
	mlx_destroy_image(values->mlx, values->pic.grass);
	mlx_destroy_image(values->mlx, values->pic.wall);
	while (++i < 6)
	{
		mlx_destroy_image(values->mlx, values->pic.golden[i]);
		mlx_destroy_image(values->mlx, values->pic.ghost[i]);
	}
	i = -1;
	while (++i < 7)
		mlx_destroy_image(values->mlx, values->pic.red[i]);
	i = -1;
	while (++i != 8)
	{
		mlx_destroy_image(values->mlx, values->pic.theo_r[i]);
		mlx_destroy_image(values->mlx, values->pic.theo_l[i]);
	}
	close_pgm2(values);
}

//displays the win message and  closes the program
void	win_condition(t_game *values)
{
	ft_printf("Congrats!\nYou Won!\n");
	close_pgm(values);
}

void	lose_condition(t_game *values)
{
	ft_printf("You died.\nTry again!\n");
	close_pgm(values);
}

void	map_tester(t_game *values, char argv[1])
{
	map_extension(argv);
	ft_memset(values, 0, sizeof(t_game));
	map_save(argv, values);
	rectangle_check(values);
	values_track(values);
	h_walls_check(values);
	v_walls_check(values);
	flood_map_copy(values);
}
