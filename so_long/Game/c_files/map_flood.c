/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_flood.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaptist <tbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:35:27 by tbaptist          #+#    #+#             */
/*   Updated: 2024/01/17 16:55:54 by tbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
//check if the map is winnable
void	ft_flood(t_game *values, int x, int y, char **n_map)
{
	if (n_map[y][x] == '1' || n_map[y][x] == 'F')
		return ;
	else if (n_map[y][x] == 'C')
		values->ccopy--;
	else if (n_map[y][x] == 'E')
	{
		values->ecopy = 1;
		return ;
	}
	n_map[y][x] = 'F';
	ft_flood(values, x - 1, y, n_map);
	ft_flood(values, x + 1, y, n_map);
	ft_flood(values, x, y - 1, n_map);
	ft_flood(values, x, y + 1, n_map);
}

void	flood_map_copy(t_game *values)
{
	int		i;
	char	**n_map;

	values->ccopy = values->c;
	n_map = (char **)ft_calloc(sizeof (char *), (values->max_y + 1));
	if (!n_map)
		return ;
	i = 0;
	while (values->map[i])
	{
		n_map[i] = ft_strdup(values->map[i]);
		i++;
	}
	n_map[i] = NULL;
	ft_flood(values, values->px, values->py, n_map);
	free_matrix(n_map);
	if (values->ccopy != 0 || values->ecopy != 1)
	{
		ft_printf("Error\nMap not winnable.\n");
		free_matrix(values->map);
		exit(EXIT_FAILURE);
	}
}
