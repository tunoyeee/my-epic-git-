/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaptist <tbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 17:43:06 by tbaptist          #+#    #+#             */
/*   Updated: 2023/04/20 11:36:04 by tbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	c1;

	i = 0;
	c1 = c;
	s = (unsigned char *)str;
	while (i < n)
	{
		if (s[i] == c1)
			return (s + i);
		i++;
	}
	return (NULL);
}
