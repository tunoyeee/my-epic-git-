/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uuu.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaptist <tbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 17:05:53 by tbaptist          #+#    #+#             */
/*   Updated: 2023/05/08 17:31:20 by tbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_uuu(unsigned int nb, int *len)
{
	if (nb >= 10)
	{
		ft_uuu(nb / 10, len);
		ft_uuu(nb % 10, len);
	}
	else
		ft_putchar(nb + 48, len);
}
