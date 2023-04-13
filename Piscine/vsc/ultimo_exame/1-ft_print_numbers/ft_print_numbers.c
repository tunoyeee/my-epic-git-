/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaptist <tbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 19:23:54 by tbaptist          #+#    #+#             */
/*   Updated: 2023/02/15 19:29:29 by tbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_print_numbers(void)
{
    int i;

    i = '0';
    while (i <= '9')
    {
        write(1, &i, 1);
        i++;
    }
}

int main(void)
{
    ft_print_numbers();
}