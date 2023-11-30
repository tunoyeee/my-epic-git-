/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaptist <tbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 15:37:53 by tbaptist          #+#    #+#             */
/*   Updated: 2023/09/26 15:29:23 by tbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_puthex(unsigned int n, int *len, char type)
{
	if (type == 'x')
	{
		if (n < 16)
		{
			ft_putchar(HEX_LOW[n % 16], len);
			return ;
		}
		ft_puthex((n / 16), len, type);
		ft_putchar(HEX_LOW[n % 16], len);
	}
	if (type == 'X')
	{	
		if (n < 16)
		{
			ft_putchar(HEX_HIGH[n % 16], len);
			return ;
		}
		ft_puthex((n / 16), len, type);
		ft_putchar(HEX_HIGH[n % 16], len);
	}
}
