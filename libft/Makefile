# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: injsong <injsong@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/19 18:52:07 by injsong           #+#    #+#              #
#    Updated: 2023/01/16 14:24:02 by injsong          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS =  ./ft_atoi.c \
		./ft_bzero.c \
		./ft_calloc.c \
		./ft_isalnum.c \
		./ft_isalpha.c \
		./ft_isascii.c \
		./ft_isdigit.c \
		./ft_isprint.c \
		./ft_itoa.c \
		./ft_memchr.c \
		./ft_memcmp.c \
		./ft_memcpy.c \
		./ft_memmove.c \
		./ft_memset.c \
		./ft_putchar_fd.c \
		./ft_putendl_fd.c \
		./ft_putnbr_fd.c \
		./ft_putstr_fd.c \
		./ft_split.c \
		./ft_strchr.c \
		./ft_strdup.c \
		./ft_striteri.c \
		./ft_strjoin.c \
		./ft_strlcat.c \
		./ft_strlcpy.c \
		./ft_strlen.c \
		./ft_strmapi.c \
		./ft_strncmp.c \
		./ft_strnstr.c \
		./ft_strrchr.c \
		./ft_strtrim.c \
		./ft_substr.c \
		./ft_tolower.c \
		./ft_toupper.c \

SRCS_B = ./ft_lstnew.c \
		./ft_lstiter.c \
		./ft_lstlast.c \
		./ft_lstsize.c \
		./ft_lstclear.c \
		./ft_lstdelone.c \
		./ft_lstadd_back.c \
		./ft_lstadd_front.c \
		./ft_lstmap.c
OBJS = $(SRCS:.c=.o)
OBJS_B = $(SRCS_B:.c=.o)
INC = .
DEL = rm -f
ARC = ar -rc

ifdef WITH_BONUS
	OBJ = $(OBJS) $(OBJS_B)
else
	OBJ = $(OBJS)
endif

all : $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@ -I $(INC)

$(NAME) : $(OBJ)
	$(ARC) $@ $(OBJ)

bonus :
	@make WITH_BONUS=1 all

clean :
	$(DEL) $(OBJS) $(OBJS_B)

fclean : clean
	$(DEL) $(NAME)

re : fclean all

.PHONY : all clean fclean re bonus