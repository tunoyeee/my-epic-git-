/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaptist <tbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 10:27:34 by tbaptist          #+#    #+#             */
/*   Updated: 2023/02/04 13:09:38 by tbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}

// int	main(void)
// {
// 	int tab[5] = {22, 77, 44, 11, 88};
// 	int size = 5;
// 	printf("before: %d, %d, %d, %d, %d\n", tab[0], tab[1],
// 	tab[2], tab[3], tab[4]);
// 	ft_sort_int_tab(tab, size);
// 	printf("after: %d, %d, %d, %d, %d\n", tab[0], tab[1],
// 	tab[2], tab[3], tab[4]);
// }
