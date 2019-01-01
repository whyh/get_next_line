/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dderevyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 17:32:35 by dderevyn          #+#    #+#             */
/*   Updated: 2018/11/16 17:53:30 by dderevyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int main(void)
{
    int fd, fd2;
    char *line;
    int ret;

    line = NULL;
    fd = open("testfile", O_RDONLY);
    fd2 = open("testfile2", O_RDONLY);

    //file 1 #1
    ret = get_next_line(fd, &line);
    printf("%i|%s|\n", ret, line);

    //file 1 #2
    ret = get_next_line(fd, &line);
    printf("%i|%s|\n", ret, line);

    //file 2 #1
    ret = get_next_line(fd2, &line);
    printf("%i|%s|\n", ret, line);

    //file 1 #3
    ret = get_next_line(fd, &line);
    printf("%i|%s|\n", ret, line);

    //file 2 #2
    ret = get_next_line(fd2, &line);
    printf("%i|%s|\n", ret, line);

    //file 1 #4
    ret = get_next_line(fd, &line);
    printf("%i|%s|\n", ret, line);

    //file 2 #3
    ret = get_next_line(fd2, &line);
    printf("%i|%s|\n", ret, line);

    //file 2 #4
    ret = get_next_line(fd2, &line);
    printf("%i|%s|\n", ret, line);

    //file 1 #5
    ret = get_next_line(fd, &line);
    printf("%i|%s|\n", ret, line);

    return (0);
}