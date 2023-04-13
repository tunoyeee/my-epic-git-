/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dezznutz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaptist <tbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 12:02:57 by tbaptist          #+#    #+#             */
/*   Updated: 2023/02/16 12:42:07 by tbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_nbr(int c)
{
	if (c > 9)
		ft_putchar((c / 10) + 48);
	ft_putchar((c % 10) + 48);
}

int	main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (0 == i % 3)
			write(1, "dezz", 4);
		if (0 == i % 5)
			write(1, "nutz", 4);
		else if (i % 3 != 0)
			ft_nbr(i);
		write(1, "\n", 1);
		i++;
	}
	
}