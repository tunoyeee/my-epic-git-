/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaptist <tbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:04:15 by tbaptist          #+#    #+#             */
/*   Updated: 2023/02/16 13:18:39 by tbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char *ft_rev_print (char *str)
{
    int i;

    i = 0;
    while (str[i] != 0)
    {
        i++;
    }
    while (i >= 0)
    {
        write(1, &str[i], 1);
        i--;
    }
    return (str);
}

int main(void)
{
    char str[] = "amog";
    ft_rev_print(str);
}