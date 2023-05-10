/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaptist <tbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 13:58:13 by tbaptist          #+#    #+#             */
/*   Updated: 2023/05/10 17:35:40 by tbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char		*line;
	static char	*buffer;
	int			size;

	size = 1;
	if (fd < 0 || fd > FOPEN_MAX || !BUFFER_SIZE)
		return (NULL);
	if (0 > (read(fd, 0, 0)))
		return (allnull(buffer));
	read(fd, buffer, size);
	while (!ft_strchr(buffer, '\n') && size)
	{
		if (size < 0)
			return (NULL);
		
	}
}