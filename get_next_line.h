/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dderevyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 16:29:55 by dderevyn          #+#    #+#             */
/*   Updated: 2019/02/08 21:13:59 by dderevyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H

# define GET_NEXT_LINE_H
# define BUFF_SIZE 13
# include "libft/libft.h"
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>

typedef struct				s_gnl_list
{
	int						fd;
	char					*content;
	struct s_gnl_list		*next;
}							t_gnl_list;

typedef struct				s_gnl_data
{
	t_gnl_list				*node;
	char					rbuff[BUFF_SIZE + 1];
	ssize_t					rlen;
	ssize_t					len;
	char					*tmp;
	int						ret_flag;
}							t_gnl_data;

int							get_next_line(const int fd, char **line);

#endif
