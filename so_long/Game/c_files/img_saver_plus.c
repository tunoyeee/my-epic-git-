/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   img_saver_plus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaptist <tbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:42:45 by tbaptist          #+#    #+#             */
/*   Updated: 2024/01/25 15:03:44 by tbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	even_more_saver(t_game *values, int x, int y)
{
	values->pic.theo_r[0] = mlx_xpm_file_to_image(values->mlx,
			"img/theoright/theoRR0.xpm", &x, &y);
	values->pic.theo_r[1] = mlx_xpm_file_to_image(values->mlx,
			"img/theoright/theoRR1.xpm", &x, &y);
	values->pic.theo_r[2] = mlx_xpm_file_to_image(values->mlx,
			"img/theoright/theoRR2.xpm", &x, &y);
	values->pic.theo_r[3] = mlx_xpm_file_to_image(values->mlx,
			"img/theoright/theoRR3.xpm", &x, &y);
	values->pic.theo_r[4] = mlx_xpm_file_to_image(values->mlx,
			"img/theoright/theoRR4.xpm", &x, &y);
	values->pic.theo_r[5] = mlx_xpm_file_to_image(values->mlx,
			"img/theoright/theoRR5.xpm", &x, &y);
	values->pic.theo_r[6] = mlx_xpm_file_to_image(values->mlx,
			"img/theoright/theoRR6.xpm", &x, &y);
	values->pic.theo_r[7] = mlx_xpm_file_to_image(values->mlx,
			"img/theoright/theoRR7.xpm", &x, &y);
}

int	check_map2(char *long_s, int first_count)
{
	int	i;

	i = 0;
	while (long_s[i] && long_s[i] != '\n')
	{
		i++;
		first_count++;
	}
	return (first_count);
}

void	check_map(char *long_s)
{
	int	i;
	int	count;
	int	first_count;

	first_count = 0;
	first_count = check_map2(long_s, first_count);
	i = 0;
	while (long_s[i])
	{
		count = 0;
		while (long_s[i] && long_s[i] != '\n')
		{
			i++;
			count++;
		}
		if (count != first_count)
		{
			ft_printf("Error\nThe map must be rectangular.\n");
			free(long_s);
			exit(EXIT_FAILURE);
		}
		if (long_s[i])
			i++;
	}
}

void	map_save2(t_game *values, char *long_s)
{
	check_map(long_s);
	if (long_s[0] == '\0' || long_s[0] == '\n')
	{
		ft_printf("Error\nEmpty file.\n");
		if (long_s[0] == '\n')
			free (long_s);
		exit(EXIT_FAILURE);
	}
	else
		values->map = ft_split(long_s, '\n');
	free (long_s);
}
