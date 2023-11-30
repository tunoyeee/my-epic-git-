/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uuu.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaptist <tbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 17:05:53 by tbaptist          #+#    #+#             */
/*   Updated: 2023/09/26 15:28:22 by tbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
