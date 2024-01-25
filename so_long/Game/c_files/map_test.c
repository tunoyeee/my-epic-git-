/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_test.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaptist <tbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 14:34:37 by tbaptist          #+#    #+#             */
/*   Updated: 2024/01/25 15:14:42 by tbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

//save the map in "values->map"
void	map_save(char *argv, t_game *values)
{
	int		fd;
	char	*s;
	char	*long_s;
	char	*temp;

	long_s = "";
	fd = open(argv, O_RDONLY);
	if (fd == -1 || fd == 0)
	{
		ft_printf("Error\nInvalid map.\n");
		exit(EXIT_FAILURE);
	}
	while (1)
	{
		s = get_next_line(fd);
		if (!s)
			break ;
		temp = long_s;
		long_s = ft_strjoin(long_s, s);
		if (temp[0])
			free (temp);
		free (s);
	}
	close (fd);
	map_save2(values, long_s);
}

//checks if the map is rectangular
void	rectangle_check(t_game *values)
{
	int	y;

	values->max_x = ft_strlen(values->map[0]);
	y = -1;
	while (values->map[++y])
	{
		if (values->max_x != (int) ft_strlen(values->map[y]))
		{
			ft_printf("Error\nThe map must be rectangular\n");
			free_matrix(values->map);
			exit(EXIT_FAILURE);
		}
	}
	values->max_y = y;
	return ;
}

//check horizontal edge map walls
void	h_walls_check(t_game *values)
{
	int	i;

	i = -1;
	while (++i != values->max_x)
	{
		if (values->map[0][i] != '1' ||
			values->map[values->max_y - 1][i] != '1')
		{
			ft_printf("Error\nThe map must be surrounded by walls\n");
			free_matrix(values->map);
			exit(EXIT_FAILURE);
		}
	}
}

// check vertical edge map walls
void	v_walls_check(t_game *values)
{
	int	i;

	i = -1;
	while (++i < values->max_y)
	{
		if (values->map[i][0] != '1' ||
			values->map[i][values->max_x - 1] != '1')
		{
			ft_printf("Error\nThe map must be surrounded by walls\n");
			free_matrix(values->map);
			exit(EXIT_FAILURE);
		}
	}
}
