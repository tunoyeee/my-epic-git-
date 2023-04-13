/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaptist <tbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 18:12:49 by tbaptist          #+#    #+#             */
/*   Updated: 2023/02/04 13:05:17 by tbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

// int	main(void)
// {
// 	int i;
// 	int k;
// 	i = 555;
// 	k = 999;
// 	printf("The value before: %d | %d\n", i, k);
// 	ft_swap(&i, &k);
// 	printf("The value after: %d | %d\n", i, k);
// }
