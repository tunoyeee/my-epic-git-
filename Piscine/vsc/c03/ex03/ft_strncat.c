/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaptist <tbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 11:46:39 by tbaptist          #+#    #+#             */
/*   Updated: 2023/02/15 18:28:36 by tbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	size;

	i = 0;
	size = 0;
	while (dest[i] != 0)
	{
		i++;
	}
	while (src[size] != 0 && size < nb)
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
	char dest[1000] = "Eu vou ";
	char src[] = "para espanha";
	printf("%s\n", ft_strncat(dest, src, 7));
} */
