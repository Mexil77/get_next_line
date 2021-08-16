/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 15:06:39 by emgarcia          #+#    #+#             */
/*   Updated: 2021/08/16 18:25:33 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_find_final(char *s)
{
	size_t	i;

	i = -1;
	while (s[++i])
		if (s[i] == '\n')
			return (i);
	return (i);
}

char	*get_next_line(int fd)
{
	char	*buf;
	char	aux;
	size_t	i;
	ssize_t	val;

	i = 0;
	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (NULL);
	val = read(fd, &aux, 1);
	while (aux != '\n' && i < BUFFER_SIZE)
	{
		if (val == 0)
			return (NULL);
		buf[i++] = aux;
		val = read(fd, &aux, 1);
	}
	if (aux == '\n' && val != 0)
		buf[i++] = aux;
	buf[i] = '\0';
	return (buf);
}
