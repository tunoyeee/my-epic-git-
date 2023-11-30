/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_rec_walls.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaptist <tbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:56:13 by tbaptist          #+#    #+#             */
/*   Updated: 2023/11/30 15:59:15 by tbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include <fcntl.h>

//serve para guardar o mapa num array de strings
void	save_line(char *argv, t_game *values)
{
	// int		i;
	// int		f;
	int		fd;
	char	*s;
	char	*long_s;
	char	*temp;
	
	long_s = "";
	fd = open(argv, O_RDONLY);
	if (fd == -1)
		return ;// 			usar exit!!!!!
	
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
	values->map = ft_split(long_s, '\n');
	close (fd);
	ft_printf("%s\n", long_s);
	free (long_s);
}

int	rectangle_check(t_game *values)
{
	int	i;

	values->max_x = ft_strlen(values->map[1]);
	i = 1;
	while (values->map[++i])
	{
		if (values->max_x != (int) ft_strlen(values->map[i]))
		{
			ft_printf("Error\n The map must be rectangular\n");
			return(0);
		}
	}
	values->max_y = i;
	ft_printf("rectangle ok\n");
	ft_printf("x: %d\ty: %d\n", values->max_x, values->max_y);
	return (1);
}
//check horizontal edge map walls
int	h_walls_check(t_game *values)
{
	int	i;
	
	i = -1;
	while (++i != values->max_x)
	{
		if (values->map[0][i] != '1' || values->map[values->max_y - 1][i] != '1')
		{
			ft_printf("Error\n The map must be surrounded by walls\n");
			return(0);
		}
	}
	ft_printf("h_walls ok\n");
	return (1);
}
// check vertical edge map walls
int	v_walls_check(t_game *values)
{
	int	i;

	i = -1;
	while (++i < values->max_y)
	{
		if (values->map[i][0] != '1' || values->map[i][values->max_x - 1] != '1')
		{
			ft_printf("Error\n The map must be surrounded by walls\n");
			return(0);
		}
	}
	ft_printf("v_walls ok\n");
 	return (1);
}
