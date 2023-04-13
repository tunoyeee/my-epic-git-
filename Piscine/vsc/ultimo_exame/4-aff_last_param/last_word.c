/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaptist <tbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:05:56 by tbaptist          #+#    #+#             */
/*   Updated: 2023/02/16 16:55:24 by tbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
    int i;
    
    i = 0;
    if (ac == 2)
    {
        while (av[1][i] != '\0') //goes to the end of the string
            i++;
        i--;
        while ((av[1][i] != ' ') || (av[1][i] >= 9 && av[1][i] <= 13)) //if it isnt a space
            i--;
        if (av[1][i] >= 33 && av[1][i] <= 126)
            i--;
            if ((av[1][i] != ' ') || (av[1][i] >= 9 && av[1][i] <= 13))
            i++;
            while (av[1][i] >= 33 && av[1][i] <= 126)
            {
                write(1, &av[1][i], 1);
                i++;    
            }
    }
    write(1, "\n", 1);
    return (0);
}
