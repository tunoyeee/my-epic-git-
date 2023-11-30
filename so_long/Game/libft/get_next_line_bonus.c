/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaptist <tbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 18:48:34 by tbaptist          #+#    #+#             */
/*   Updated: 2023/09/26 15:28:18 by tbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*get_next_line(int fd)
{
	char		*line;
	static char	buffer[FOPEN_MAX][BUFFER_SIZE + 1];
	int			len;

	len = 1;
	line = NULL;
	if (fd < 0 || read(fd, 0, 0) < 0 || 1 > BUFFER_SIZE)
	{
		len = -1;
		if (fd >= 0 && fd <= FOPEN_MAX)
			while (buffer [fd][++len])
				buffer[fd][len] = 0;
		return (NULL);
	}
	while (len > 0)
	{
		if (!buffer[fd][0])
			len = read(fd, buffer[fd], BUFFER_SIZE);
		if (len > 0)
			line = ft_strjoin_gnl(line, buffer[fd]);
		if (ft_when_nl(buffer[fd]) == 1)
			break ;
	}
	return (line);
}
