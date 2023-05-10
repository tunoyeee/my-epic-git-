/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaptist <tbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 13:59:38 by tbaptist          #+#    #+#             */
/*   Updated: 2023/05/10 17:48:22 by tbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] == ((char)c))
			return ((char *)&str[i]);
		i++;
	}
	if (str[i] == ((char)c))
		return ((char *)str + i);
	return (NULL);
}

char	*allnull(char *str)
{
	while (*str)
	{
		*str = '\0';
		str++;
	}
	return (str);
}
