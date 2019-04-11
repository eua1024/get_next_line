/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efedoryc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/07 21:26:20 by efedoryc          #+#    #+#             */
/*   Updated: 2017/03/07 21:26:23 by efedoryc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include "libft/libft.h"
# define BUFF_SIZE 1

typedef struct	s_lines
{
	char			*rest_start;
	char			*rest;
	int				fd;
	struct s_lines	*next;
}				t_lines;

int				get_next_line(const int fd, char **line);

#endif
