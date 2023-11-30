/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaptist <tbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 13:57:22 by tbaptist          #+#    #+#             */
/*   Updated: 2023/05/03 12:53:28 by tbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nuword(char const *s, char c)
{
	int	gate;
	int	w;

	gate = 2;
	w = 0;
	while (*s)
	{
		if (*s != c && gate == 2)
		{
			w++;
			gate = 1;
		}
		else if (*s == c)
			gate = 2;
		s++;
	}
	return (w);
}

static char	*letters(char const *s, char c)
{
	char	*dest;
	int		i;

	i = 0;
	while (s[i] != 0 && s[i] != c)
		i++;
	dest = (char *)malloc(sizeof(char) * (i + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (s[i] != 0 && s[i] != c)
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	int		n;
	int		i;
	char	**array;

	i = 0;
	n = 0;
	array = (char **)malloc(sizeof(char *) * (nuword(s, c) + 1));
	if (!array)
		return (NULL);
	while (s[n] != 0)
	{
		if (s[n] != c)
		{
			array[i++] = letters(&s[n], c);
			while (s[n] != c && s[n] != '\0')
				n++;
		}
		else
			n++;
	}
	array[i] = NULL;
	return (array);
}
