/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaptist <tbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 20:30:23 by tbaptist          #+#    #+#             */
/*   Updated: 2023/01/29 20:30:29 by tbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char d);

void	comp( int x, int y, int l, int c)
{
	if ((l == 1 && c == 1) || (l == y && c == 1)
		|| (c == x && l == 1) || (l == y && c == x))
	{
		ft_putchar ('o');
	}
	else if (l == 1 || l == y)
	{
		ft_putchar ('-');
	}
	else if (c == 1 || c == x)
	{
		ft_putchar ('|');
	}
	else
	{
		ft_putchar (' ');
	}
}

void	rush(int x, int y)
{
	int	c;
	int	l;

	c = 1;
	l = 1;
	while (l <= y)
	{
		while (c <= x)
		{
			comp (x, y, l, c);
			c++;
		}
		ft_putchar('\n');
		c = 1;
		l++;
	}
}
