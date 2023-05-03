/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaptist <tbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 11:29:25 by tbaptist          #+#    #+#             */
/*   Updated: 2023/04/20 16:30:22 by tbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*b;
	char	*l;

	b = (char *)big;
	l = (char *)little;
	i = 0;
	if (!*little)
		return (b);
	while (b[i] != '\0' && i < len)
	{
		j = 0;
		while (b[i + j] == l[j] && i + j < len)
		{
			if (l[j + 1] == '\0')
				return (b + i);
			j++;
		}
		i++;
	}
	return (0);
}
