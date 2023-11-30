/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_path_collec.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaptist <tbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:52:48 by tbaptist          #+#    #+#             */
/*   Updated: 2023/11/23 20:52:27 by tbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	values_track(t_game *values)
{
	int	i; //y
	int	j; //x

	i = -1;
	while (values->map[++i])
	{
		j = -1;
		while (values->map[i][++j])
		{
			if (values->map[i][j] == 'C')
				values->c += 1;
			else if (values->map[i][j] == 'P')
			{
				values->p += 1;
				values->px = j;
				values->py = i;
			}
			else if (values->map[i][j] == 'E')
				values->e += 1;
			else if (values->map[i][j] != '1' && values->map[i][j] != '0')
				ft_printf("Error\n Invalid components: %c\n", values->map[i][j]);
		}
	}
	printf("C: %d\n", values->c);
	printf("E: %d\n", values->e);
	printf("P: %d\n", values->p);
	if (values->p != 1 || values->e != 1)
		ft_printf("Error\n The number of players and exits must be 1.\n");
	else if (values->c < 1)
		ft_printf("Error\n There must be at least 1 collectible.\n");
	ft_printf("values ok\n");
}

//void	collectibles_exit(struct Game_v *values)
//{
//	int	i;
//
//	i = 0;
//	values->ccopy = values ->C;
//	while ( values->ccopy != 0)
//	{
//		if (/* player location = collectible location */)
//			values->ccopy--;
//	}
//	if (values->ccopy == 0)
//	{
//	}
//}
