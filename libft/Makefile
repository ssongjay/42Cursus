# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: injsong <injsong@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/19 18:52:07 by injsong           #+#    #+#              #
#    Updated: 2022/11/09 16:27:17 by injsong          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJS = ${SRCS:.c=.o}
INCS = includes
NAME = libft.a
RM   = rm -f


all : ${NAME}

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@ -I $(INCS)

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re