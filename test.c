/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dderevyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/08 19:15:14 by dderevyn          #+#    #+#             */
/*   Updated: 2019/02/08 19:50:33 by dderevyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "stdio.h"

int main(void)
{
	int		fd;
	int 	i;
	int 	ret;
	char	*line;

	fd = open("libft/libft.h", O_RDONLY);
	i = 1;
	while ((ret = get_next_line(fd, (void*)0)) > 0 && i < 1)
	{
		++i;
		printf("%d|%s|\n", ret, line);
		free(line);
	}
	printf("%d|%s|\n", ret, line);
	free(line);
	return (0);
}
