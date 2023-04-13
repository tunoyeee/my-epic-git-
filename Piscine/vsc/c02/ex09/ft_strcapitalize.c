/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaptist <tbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 20:10:49 by tbaptist          #+#    #+#             */
/*   Updated: 2023/02/14 17:11:28 by tbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	n;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 'Z' && str[i] >= 'A')
		{
			str[i] += 32;
		}
		n = str[i - 1];
		if (n < 48 || (n > 57 && n < 65) || (n > 90 && n < 97) || n > 122)
		{
			if (str[i] <= 'z' && str[i] >= 'a')
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char amog[42] = "i loVe_swimIng#duRin4g the-niGht";
// 	printf("%s\n", ft_strcapitalize(amog));
// }
