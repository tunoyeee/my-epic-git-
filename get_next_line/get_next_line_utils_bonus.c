/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaptist <tbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 18:48:07 by tbaptist          #+#    #+#             */
/*   Updated: 2023/05/18 13:54:39 by tbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*new;
	int		i;
	int		j;

	i = 0;
	j = -1;
	new = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!new)
		return (NULL);
	while (s1 && s1[i])
	{
		new[i] = s1[i];
		i++;
	}
	while (s2[++j])
	{
		new[i++] = s2[j];
		if (s2[j] == '\n')
			break ;
	}
	new[i] = '\0';
	free(s1);
	return (new);
}

int	ft_when_nl(char *buffer)
{
	int	i;
	int	j;
	int	buffer_2;

	i = 0;
	j = 0;
	buffer_2 = 0;
	while (buffer[i] != 0 && buffer[i] != '\n')
		buffer[i++] = '\0';
	if (buffer[i] == '\n')
	{
		buffer_2 = 1;
		buffer[i++] = '\0';
		while (buffer[i] != 0)
		{
			buffer[j++] = buffer[i];
			buffer[i++] = '\0';
		}
	}
	return (buffer_2);
}
