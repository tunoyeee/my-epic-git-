/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaptist <tbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:55:11 by tbaptist          #+#    #+#             */
/*   Updated: 2023/02/16 14:21:29 by tbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long int	i;
	long int	num;

	i = 0;
	num = nb;
	if (nb == 0)
		return (0);
	if (nb == 1)
		return (1);
	while (i * i <= num)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

/* int	main(void)
{
	printf("%d\n", ft_sqrt(-1));
} */
