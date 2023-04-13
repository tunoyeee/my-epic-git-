/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaptist <tbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:07:06 by tbaptist          #+#    #+#             */
/*   Updated: 2023/02/16 14:15:19 by tbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	rsl;

	rsl = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb > 0)
	{
		rsl *= nb * ft_recursive_factorial(nb - 1);
	}
	return (rsl);
}

// int	main(void)
// {
// 	printf("%d\n", ft_recursive_factorial(5));
// }
