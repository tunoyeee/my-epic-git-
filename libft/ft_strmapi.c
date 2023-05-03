/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaptist <tbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 16:07:47 by tbaptist          #+#    #+#             */
/*   Updated: 2023/04/26 16:21:53 by tbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*final;

	i = 0;
	final = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!final)
		return (NULL);
	while (s[i])
	{
		final[i] = f(i, s[i]);
		i++;
	}
	final[i] = 0;
	return (final);
}
