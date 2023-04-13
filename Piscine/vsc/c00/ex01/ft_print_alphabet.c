/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaptist <tbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 14:22:03 by tbaptist          #+#    #+#             */
/*   Updated: 2023/02/01 14:21:39 by tbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	x;

	x = 'a';
	while (x <= 'z')
	{
		write (1, &x, 1);
		x++;
	}
}

// int	main(void)
// {
// 	ft_print_alphabet();
// }
