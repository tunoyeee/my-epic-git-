/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaptist <tbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:32:11 by tbaptist          #+#    #+#             */
/*   Updated: 2024/01/25 15:17:19 by tbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
//check if the map file ends with .ber
void	map_extension(char	*argv)
{
	char	*dot;

	dot = ft_strchr(argv, '.');
	if (!dot)
	{
		ft_printf("Error\nMap file is wrong.\n");
		exit(EXIT_FAILURE);
	}
	if (ft_strncmp(dot, ".ber", 5) != 0)
	{
		printf("Error\nWrong map extension.\n");
		exit(EXIT_FAILURE);
	}
}

void	free_matrix(char **str)
{
	int	i;

	i = -1;
	while (str[++i])
		free (str[i]);
	free (str);
}

int	main(int argc, char	**argv)
{
	t_game	values;

	if (argc != 2)
	{
		ft_printf("Error\nWrong number of arguments.\n");
		return (0);
	}
	map_tester(&values, argv[1]);
	values.ccopy = values.c;
	values.max_y = values.max_y * 64;
	values.max_x = values.max_x * 64;
	values.mlx = mlx_init();
	saver(&values);
	values.mlx_win = mlx_new_window(values.mlx,
			values.max_x, values.max_y, "42_Celeste");
	mlx_clear_window(values.mlx, values.mlx_win);
	print_images(&values);
	mlx_hook(values.mlx_win, 2, 1L << 0, key_press, &values);
	mlx_loop_hook(values.mlx, animations, &values);
	mlx_hook(values.mlx_win, 17, 0L, (void *)close_pgm, &values);
	mlx_loop(values.mlx);
}
