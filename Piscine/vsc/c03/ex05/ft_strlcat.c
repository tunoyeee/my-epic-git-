/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaptist <tbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 14:57:22 by tbaptist          #+#    #+#             */
/*   Updated: 2023/02/15 01:40:48 by tbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dlen;
	unsigned int	slen;

	i = 0;
	j = 0;
	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	j = dlen;
	if (size == 0 || size <= dlen)
		return (slen + size);
	while (src[i] && i < size - dlen -1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = 0;
	return (dlen + slen);
}

/* int	main(void)
{
	char dest[1000] = "Eu vou ";
	char src[] = "para espanha";
	printf("%d\n", ft_strlcat(dest, src, 10));
	printf("%s\n", dest);
} */
