/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 17:03:56 by emgarcia          #+#    #+#             */
/*   Updated: 2021/08/20 19:29:08 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

void	*ft_calloczero(size_t count, size_t size)
{
	void	*final;
	size_t	i;

	i = -1;
	final = malloc(count * size);
	if (final == NULL)
		return (final);
	while (++i < size)
		((char *) final)[i] = '\0';
	return (final);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoinchar(char const *s1, char const c)
{
	size_t	s1_len;
	size_t	i;
	char	*final;

	if (!s1 || !c)
		return (NULL);
	i = -1;
	s1_len = ft_strlen(s1);
	final = (char *)malloc(sizeof(char) * (s1_len + 2));
	if (final == NULL)
		return (NULL);
	while (s1[++i] != '\0')
		final[i] = s1[i];
	final[i++] = c;
	final[i] = '\0';
	return (final);
}

char	*ft_segure_join(char *buf, char aux)
{
	char	*aux_buf;

	aux_buf = buf;
	buf = ft_strjoinchar(buf, aux);
	free(aux_buf);
	return (buf);
}
