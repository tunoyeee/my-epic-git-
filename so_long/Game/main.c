/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaptist <tbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:32:11 by tbaptist          #+#    #+#             */
/*   Updated: 2023/11/30 15:59:54 by tbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	map_extension(char	*argv)
{
	char	*dot;

	dot = ft_strchr(argv, '.');
	if (!dot)
	{
		ft_printf("Error\n Map file is wrong.");
		return (0);
	}
	if (ft_strncmp(dot, ".ber", 5) != 0)
	{
		printf("Error\n Wrong map extension.");
		return (0);
	}
	ft_printf("map_extension ok\n");
	return (1);
}

void	values_init(t_game	*values)
{
	values->map = NULL;
	values->max_x = 0;
	values->max_y = 0;
	values->e = 0;
	values->ecopy = 0;
	values->p = 0;
	values->c = 0;
	values->ccopy = 0;
	values->px = 0;
	values->py = 0;
}

void	free_matrix(char **str)
{
	int	i;

	i = -1;
	while (str[++i])
		free (str[i]);
	free (str);
}

int	main(int	argc, char	**argv)
{
	t_game	values;

	if (argc != 2)
	{
		ft_printf("Error\n Wrong number of arguments.");
		return (0);
	}
	
	values_init(&values);
	map_extension(argv[1]);
	save_line(argv[1], &values);
	values_track(&values);
	rectangle_check(&values);
	h_walls_check(&values);
	v_walls_check(&values);
	map_copy(&values);
	free_matrix(values.map);
}
