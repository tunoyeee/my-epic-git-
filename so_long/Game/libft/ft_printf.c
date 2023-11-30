/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaptist <tbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 15:06:33 by tbaptist          #+#    #+#             */
/*   Updated: 2023/09/26 15:29:41 by tbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	param(int *len, char str, va_list arg)
{
	if (str == 'c')
		ft_putchar(va_arg(arg, int), len);
	else if (str == 's')
		ft_putstr(va_arg(arg, char *), len);
	else if (str == 'p')
		ft_putvoid(va_arg(arg, unsigned long), len);
	else if (str == 'd' || str == 'i')
		ft_putnbr(va_arg(arg, int), len);
	else if (str == 'u')
		ft_uuu(va_arg(arg, unsigned int), len);
	else if (str == 'x' || str == 'X')
		ft_puthex(va_arg(arg, unsigned int), len, str);
	else if (str == '%')
		ft_putchar('%', len);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		len;
	va_list	arg;

	i = 0;
	len = 0;
	va_start(arg, str);
	while (str[i] != 0)
	{
		if (str[i] == '%')
			param(&len, str[++i], arg);
		else
			ft_putchar(str[i], &len);
		i++;
	}
	return (len);
}
