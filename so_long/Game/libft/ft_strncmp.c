/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaptist <tbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 17:25:50 by tbaptist          #+#    #+#             */
/*   Updated: 2023/11/15 16:17:56 by tbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t num)
{
	size_t			i;
	unsigned char	c1;
	unsigned char	c2;

	i = 0;
	if (num == 0)
		return (0);
	while (i < (num - 1) && str1[i] == str2[i] && str1[i] != 0)
		i++;
	c1 = str1[i];
	c2 = str2[i];
	return (c1 - c2);
}
