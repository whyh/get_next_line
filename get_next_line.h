/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dderevyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 16:29:55 by dderevyn          #+#    #+#             */
/*   Updated: 2018/12/07 16:08:07 by dderevyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H

# define GET_NEXT_LINE_H
# define BUFF_SIZE 13
# include "libft/libft.h"
# include <stdlib.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>

#include <stdio.h>

typedef struct		s_fd
{
	int				fd;
	char			*content;
	struct s_fd		*next;
}					t_fd;

int					get_next_line(const int fd, char **line);

#endif
//
//static int		static_valid_n_pull(t_fd **head, char **line, int fd)
//{
//    size_t ln;
//    t_fd *node;
//
//    if (*line != NULL)
//        ft_strdel(line);
//    node = *head;
//    while (node != NULL && node->fd != fd)
//        node = node->next;
//    if (node == NULL)
//        return (-42);
//    ln = ft_linelen(node->content);
//    if (!(*line = ft_strnew(ln)))
//        return (-1);
//    ft_strncpy(*line, node->content, ln);
//    if (node->content[ln] == '\0') {
//        static_del(node, head);
//        return (-42);
//    }
//    if (!(ft_linetrim(&(node->content), ln + 1)))
//        return (-1);
//    return (1);
//}