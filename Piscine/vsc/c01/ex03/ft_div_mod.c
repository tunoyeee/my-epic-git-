/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaptist <tbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:19:48 by tbaptist          #+#    #+#             */
/*   Updated: 2023/02/09 20:27:38 by tbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main(void)
{
	int s;
	int w;
	int *hola = &s;
	int *buenas = &w;

	s = 101;
	w = 50;
	ft_div_mod(s, w, hola, buenas);
	printf("s divided by w is: %d\n", *hola);
	printf("and the remainder of the division is: %d", *buenas);
}
