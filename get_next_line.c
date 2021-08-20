/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 15:06:39 by emgarcia          #+#    #+#             */
/*   Updated: 2021/08/20 19:25:02 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char	*buf;
	char	aux;
	ssize_t	val;

	if (fd == -1)
		return (NULL);
	buf = ft_calloczero(sizeof(char), (BUFFER_SIZE + 1));
	if (!buf)
		return (NULL);
	val = read(fd, &aux, 1);
	if (val <= 0)
	{
		free(buf);
		return (NULL);
	}
	while (val > 0 && aux != '\n')
	{
		buf = ft_segure_join(buf, aux);
		val = read(fd, &aux, 1);
	}
	if (aux == '\n')
	{
		buf = ft_segure_join(buf, aux);
	}
	return (buf);
}
