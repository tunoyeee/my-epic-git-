/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaptist <tbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 16:42:50 by tbaptist          #+#    #+#             */
/*   Updated: 2023/05/08 17:29:12 by tbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

# define HEX_LOW "0123456789abcdef"
# define HEX_HIGH "0123456789ABCDEF"

int		ft_printf(const char *str, ...);
void	ft_putchar(char c, int *len);
void	ft_putstr(char *str, int *len);
void	ft_puthex(unsigned int n, int *len, char type);
void	ft_putvoid(unsigned long addr, int *len);
void	ft_putnbr(int nb, int *len);
void	ft_uuu(unsigned int nb, int *len);

#endif