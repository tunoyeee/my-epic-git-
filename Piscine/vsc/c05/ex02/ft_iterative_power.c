/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaptist <tbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:40:59 by tbaptist          #+#    #+#             */
/*   Updated: 2023/02/16 14:17:54 by tbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	help;

	help = 1;
	if (power < 0)
		return (0);
	if (power > 0)
	{
		while (power != 0)
		{
			help *= nb;
			power--;
		}
		return (help);
	}
	return (1);
}

// int	main(void)
// {
// 	printf("%d\n", ft_iterative_power(5, 2));
// }
