/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaptist <tbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:54:20 by tbaptist          #+#    #+#             */
/*   Updated: 2023/02/15 17:55:20 by tbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned char	c1;
	unsigned char	c2;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s1[i] == s2[i] && i < n - 1)
		i++;
	c1 = s1[i];
	c2 = s2[i];
	return (c1 - c2);
}

/* int main(void)
{
    char all[] = "Hello";
    char non[] = "Hellod";
    printf("%d\n", ft_strncmp(non, all, 4));
} */
