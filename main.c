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

//int				main(void)
//{
//    char		*line;
//    int			fd;
//    int			ret;
//    int			count_lines;
//    char		*filename;
//    int			errors;
//
//    filename = "testfile";
//    fd = open(filename, O_RDONLY);
//    if (fd > 2)
//    {
//        count_lines = 0;
//        errors = 0;
//        line = NULL;
//        while ((ret = get_next_line(fd, &line)) > 0)
//        {
//            if (count_lines == 0 && strcmp(line, "1234567890abcde") != 0)
//                errors++;
//            if (count_lines == 1 && strcmp(line, "fghijklmnopqrst") != 0)
//                errors++;
//            if (count_lines == 2 && strcmp(line, "edcba0987654321") != 0)
//                errors++;
//            if (count_lines == 3 && strcmp(line, "tsrqponmlkjihgf") != 0)
//                errors++;
//            count_lines++;
//            if (count_lines > 50)
//                break ;
//        }
//        close(fd);
//        if (count_lines != 4)
//            printf("-> must have returned '1' four times instead of %d time(s)\n", count_lines);
//        if (errors > 0)
//            printf("-> must have read \"1234567890abcde\", \"fghijklmnopqrst\", \"edcba0987654321\" and \"tsrqponmlkjihgf\"\n");
//        if (count_lines == 4 && errors == 0)
//            printf("OK\n");
//    }
//    else
//        printf("An error occured while opening file %s\n", filename);
//    return (0);
//}


int main(void)
{
    int     fd, fd2;
    char    *line;

    line = NULL;
    fd = open("testfile", O_RDONLY);
	fd2 = open("testfile2", O_RDONLY);
	get_next_line(fd, &line);
    printf("%s\n", line);
    get_next_line(fd2, &line);
    printf("%s\n", line);
    get_next_line(fd2, &line);
    printf("%s\n", line);
    get_next_line(fd2, &line);
    printf("%s\n", line);
    get_next_line(fd, &line);
    printf("%s\n", line);
	get_next_line(fd2, &line);
	printf("%s\n", line);
	get_next_line(fd2, &line);
	printf("%s\n", line);
	get_next_line(fd, &line);
	printf("%s\n", line);
	get_next_line(fd, &line);
	printf("%s\n", line);
    get_next_line(fd, &line);
    printf("%s\n", line);
	system("leaks l");
}
