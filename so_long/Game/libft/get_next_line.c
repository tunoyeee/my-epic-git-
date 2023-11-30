/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaptist <tbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 13:58:13 by tbaptist          #+#    #+#             */
/*   Updated: 2023/09/26 15:27:59 by tbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*get_next_line(int fd)
{
	char		*line;
	static char	buffer[BUFFER_SIZE + 1];
	int			n;

	n = 1;
	line = NULL;
	if (fd < 0 || read(fd, 0, 0) < 0 || 1 > BUFFER_SIZE)
	{
		ft_bzero(buffer, BUFFER_SIZE);
		return (NULL);
	}
	while (n > 0)
	{
		if (!buffer[0])
			n = read(fd, buffer, BUFFER_SIZE);
		if (n > 0)
			line = ft_strjoin_gnl(line, buffer);
		if (ft_when_nl(buffer) == 1)
			break ;
	}
	return (line);
}
