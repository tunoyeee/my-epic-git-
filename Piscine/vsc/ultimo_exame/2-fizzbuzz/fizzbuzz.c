/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaptist <tbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 19:32:09 by tbaptist          #+#    #+#             */
/*   Updated: 2023/02/16 22:44:48 by tbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char ft_putchar(char c)
{
    write(1, &c, 1);
    return (c);
}

void ft_nbr(int c)
{
    if (c > 9)
        ft_putchar((c / 10) + 48);
    ft_putchar((c % 10) + 48);
}

int main(void)
{
    int i;

    i = 1;
    while (i <= 100)
    {
        if (0 == i % 3)
        {
            write(1, "fizz", 4);
        }
        if (0 == i % 5)
        {
            write(1, "buzz", 4);
        }
        else if (0!= i % 3)
        {
            ft_nbr(i);
        }
        write(1, "\n", 1);
        i++;
    }
        
}
   