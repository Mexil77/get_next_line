# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/16 15:16:07 by emgarcia          #+#    #+#              #
#    Updated: 2021/08/16 15:31:15 by emgarcia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= get_next_line.c  get_next_line_utils.c
OBJS	= ${SRCS:.c=.o}
NAME	= get_next_line
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror -D BUFFER_SIZE=42
RM		= rm -rf

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	ar -crs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all