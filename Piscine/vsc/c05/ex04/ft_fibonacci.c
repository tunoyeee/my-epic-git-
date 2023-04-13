/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaptist <tbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 19:18:43 by tbaptist          #+#    #+#             */
/*   Updated: 2023/02/16 14:20:28 by tbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	rsl;

	rsl = 0;
	if (index < 0)
		return (-1);
	if (index < 2)
	{
		return (index);
	}
	else
	{
		rsl = ft_fibonacci(index - 2) + ft_fibonacci(index - 1);
		return (rsl);
	}
}

// int	main(void)
// {
// 	printf("%d\n", ft_fibonacci(3));
// }
