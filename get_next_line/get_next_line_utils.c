/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaptist <tbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 13:59:38 by tbaptist          #+#    #+#             */
/*   Updated: 2023/05/24 14:15:05 by tbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = (unsigned char *)s;
	if (n > 0)
	{
		while (i < n)
		{
			str[i] = '\0';
			i++;
		}
	}
}

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
	char	*new_s;
	int		i;
	int		j;

	i = 0;
	j = -1;
	new_s = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!new_s)
		return (NULL);
	while (s1 && s1[i])
	{
		new_s[i] = s1[i];
		i++;
	}
	while (s2[++j])
	{
		new_s[i++] = s2[j];
		if (s2[j] == '\n')
			break ;
	}
	new_s[i] = '\0';
	free(s1);
	return (new_s);
}

int	ft_when_nl(char *buffer)
{
	int	i;
	int	j;
	int	find_nl;

	i = 0;
	j = 0;
	find_nl = 0;
	while (buffer[i] != 0 && buffer[i] != '\n')
		buffer[i++] = '\0';
	if (buffer[i] == '\n')
	{
		find_nl = 1;
		buffer[i++] = '\0';
		while (buffer[i] != 0)
		{
			buffer[j++] = buffer[i];
			buffer[i++] = '\0';
		}
	}
	return (find_nl);
}
