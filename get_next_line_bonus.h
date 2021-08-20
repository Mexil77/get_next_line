/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 17:02:27 by emgarcia          #+#    #+#             */
/*   Updated: 2021/08/20 19:28:52 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <sys/types.h>

char	*get_next_line(int fd);
void	*ft_calloczero(size_t count, size_t size);
size_t	ft_strlen(const char *s);
char	*ft_strjoinchar(char const *s1, char const c);
char	*ft_segure_join(char *buf, char aux);

#endif