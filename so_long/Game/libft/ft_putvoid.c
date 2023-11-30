/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putvoid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaptist <tbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 17:57:09 by tbaptist          #+#    #+#             */
/*   Updated: 2023/09/26 15:28:52 by tbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putvoid(unsigned long addr, int *len)
{
	if (!addr)
		ft_putstr("(nil)", len);
	else
	{
		if (addr < 16)
		{
			ft_putstr("0x", len);
			ft_putchar(HEX_LOW[addr % 16], len);
			return ;
		}
		ft_putvoid((addr / 16), len);
		ft_putchar(HEX_LOW[addr % 16], len);
	}
}
