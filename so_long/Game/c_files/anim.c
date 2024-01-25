/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   anim.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaptist <tbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 20:15:05 by tbaptist          #+#    #+#             */
/*   Updated: 2024/01/24 11:56:37 by tbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

unsigned int	timer(void)
{
	struct timeval	time;

	gettimeofday(&time, NULL);
	return ((time.tv_sec * 1000) + (time.tv_usec / 1000));
}

int	golden_anim(t_game	*values)
{
	static unsigned int	i = 0;

	if (i == 0)
		i = timer();
	if (timer() - i < 100)
		return (0);
	i = timer();
	if (values->pic.fgolden == 6)
		values->pic.fgolden = 0;
	else
		values->pic.fgolden++;
	values->pic.golden[6] = values->pic.golden[values->pic.fgolden];
	print_images(values);
	return (0);
}

int	red_anim(t_game	*values)
{
	static unsigned int	i = 0;

	if (i == 0)
		i = timer();
	if (timer() - i < 100)
		return (0);
	i = timer();
	if (values->pic.fred == 7)
		values->pic.fred = 0;
	else
		values->pic.fred++;
	values->pic.red[7] = values->pic.red[values->pic.fred];
	print_images(values);
	return (0);
}

int	ghost_anim(t_game *values)
{
	static unsigned int	i = 0;

	if (i == 0)
		i = timer();
	if (timer() - i < 100)
		return (0);
	i = timer();
	if (values->pic.fghost == 6)
		values->pic.fghost = 0;
	else
		values->pic.fghost++;
	values->pic.ghost[6] = values->pic.ghost[values->pic.fghost];
	print_images(values);
	return (0);
}
