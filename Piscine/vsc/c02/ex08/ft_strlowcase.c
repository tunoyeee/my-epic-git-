/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaptist <tbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 19:59:01 by tbaptist          #+#    #+#             */
/*   Updated: 2023/02/14 16:40:43 by tbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] <= 'Z' && str[i] >= 'A')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

// int main(void)
// {
// 	char hora[32] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
// 	printf("%s\n", ft_strlowcase(hora));
// }
