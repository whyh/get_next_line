# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dderevyn <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/31 16:17:42 by dderevyn          #+#    #+#              #
#    Updated: 2018/11/16 16:55:53 by dderevyn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft/libft.a
SRC = libft/*.c
OBJ = libft/*.o

.PHONY: run re all clean fclean norm

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRC) -I.libft.h
	mv *.o libft/
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

all: $(NAME)

norm:
	Norminette libft/*.c && Norminette libft/*.h && Norminette get_next_line.c && Norminette get_next_line.h

clean:
	/bin/rm -rf $(OBJ) && /bin/rm -rf *.o

fclean: clean
	/bin/rm -rf $(NAME)

run:
	 gcc -Wall -Wextra -Werror main.c get_next_line.c -Llibft/ -lft -o l && ./l && /bin/rm -rf l

re: fclean all run
