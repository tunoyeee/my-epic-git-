/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_values.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaptist <tbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:52:48 by tbaptist          #+#    #+#             */
/*   Updated: 2024/01/25 15:11:56 by tbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	new_bot(int x, int y, t_game *values)
{
	values->bot[values->b].x = x;
	values->bot[values->b].y = y;
	values->b++;
}

//display error message and closes the program
void	values_errors(t_game *values)
{
	if (values->p != 1 || values->e != 1)
	{
		ft_printf("Error\nThe number of players and exits must be 1.\n");
		free_matrix(values->map);
		exit(EXIT_FAILURE);
	}
	else if (values->c < 1)
	{
		ft_printf("Error\nThere must be at least 1 collectible.\n");
		free_matrix(values->map);
		exit(EXIT_FAILURE);
	}
}

void	values_else(t_game *values, int i, int j)
{
	if (values->map[i][j] == 'C')
		values->c++;
	else if (values->map[i][j] == 'B')
		new_bot(j, i, values);
	else if (values->map[i][j] == 'P')
	{
		values->p++;
		values->px = j;
		values->py = i;
	}
	else if (values->map[i][j] == 'E')
		values->e++;
	else if (values->map[i][j] != '1' && values->map[i][j] != '0')
	{
		ft_printf("Error\nInvalid component: %c\n", values->map[i][j]);
		free_matrix(values->map);
		exit(EXIT_FAILURE);
	}
}

//check if the values are valid in the map (i = y, j = x)
void	values_track(t_game *values)
{
	int	i;
	int	j;

	i = -1;
	while (values->map[++i])
	{
		j = -1;
		while (values->map[i][++j])
		{
			values_else(values, i, j);
		}
	}
	values_errors(values);
	return ;
}
