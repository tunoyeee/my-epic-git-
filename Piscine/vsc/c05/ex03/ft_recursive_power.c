/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaptist <tbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 17:08:11 by tbaptist          #+#    #+#             */
/*   Updated: 2023/02/16 14:19:02 by tbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 0)
	{
		return (nb * ft_recursive_power(nb, (power - 1)));
	}
	return (1);
}

// int	main(void)
// {
// 	printf("%d\n", ft_recursive_power(5, 0));
// }
