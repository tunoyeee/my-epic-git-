/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaptist <tbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:43:16 by tbaptist          #+#    #+#             */
/*   Updated: 2023/02/16 14:14:38 by tbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	unsigned int	rsl;

	rsl = 1;
	if (nb > 0)
	{
		while (nb > 0)
		{
			rsl *= nb;
			nb--;
		}
	}
	if (nb < 0)
	{
		return (0);
	}
	return (rsl);
}

// int	main(void)
// {
// 	printf("%d\n", ft_iterative_factorial(5));	
// }
