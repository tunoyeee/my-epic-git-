/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaptist <tbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 17:23:36 by tbaptist          #+#    #+#             */
/*   Updated: 2023/05/10 17:33:43 by tbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
#ifndef BUFFER_SIZE
# define BUFFER_SIZE 4096
#endif

#include <stdio.h>
#include <unistd.h>

char	*get_next_line(int fd);
char	*ft_strchr(const char *str, int c);
void	allnull(char *str);

#endif