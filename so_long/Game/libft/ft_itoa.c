/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaptist <tbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 20:05:10 by tbaptist          #+#    #+#             */
/*   Updated: 2023/05/03 12:51:11 by tbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	size(long int l)
{
	int	i;

	i = 0;
	if (l == 0)
		return (1);
	if (l < 0)
	{
		i++;
		l *= -1;
	}
	while (l != 0)
	{
		i++;
		l = l / 10;
	}
	return (i);
}

static void	converter(long int l, char *s, long int t)
{
	int	x;

	x = -1;
	if (l < 0)
	{
		s[0] = '-';
		l *= -1;
		x++;
	}
	if (l == 0)
		s[0] = 0;
	while (x < t)
	{
		s[t--] = (l % 10) + 48;
		l = l / 10;
	}
}

char	*ft_itoa(int n)
{
	long int	l;
	char		*s;
	int			t;

	l = n;
	t = size(l);
	s = (char *)malloc(t + 1);
	if (!s)
		return (NULL);
	s[t--] = 0;
	converter(l, s, t);
	return (s);
}
