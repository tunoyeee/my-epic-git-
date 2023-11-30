/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaptist <tbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:55:25 by tbaptist          #+#    #+#             */
/*   Updated: 2023/04/22 15:15:52 by tbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*new;
	unsigned int	i;

	i = 0;
	if (!s)
		return (NULL);
	if (len == 0 || start > ft_strlen(s))
	{
		new = malloc(1);
		*new = '\0';
		return (new);
	}
	if (ft_strlen(s) - start >= len)
		new = (char *)malloc(sizeof(char) * (len + 1));
	else
		new = (char *)malloc(sizeof(char) * (ft_strlen(s) - start + 1));
	if (!new)
		return (NULL);
	while (i < len && start < ft_strlen(s))
	{
		new[i++] = s[start++];
	}
	new[i] = '\0';
	return (new);
}
