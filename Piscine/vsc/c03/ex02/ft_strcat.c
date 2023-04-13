/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaptist <tbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 10:33:52 by tbaptist          #+#    #+#             */
/*   Updated: 2023/02/15 01:30:25 by tbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	size;

	size = 0;
	i = 0;
	while (dest[i] != 0)
	{
		i++;
	}
	while (src[size] != 0)
	{
		dest[i] = src[size];
		i++;
		size++;
	}
	dest[i] = 0;
	return (dest);
}

/* int	main(void)
{
	char str[] = "para casa";
	char dest[1000] = "Eu vou ";
	printf("%s\n", ft_strcat(dest, str));
} */
