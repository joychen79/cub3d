# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/13 12:28:27 by jingchen          #+#    #+#              #
#    Updated: 2024/10/13 13:41:34 by jingchen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_fstrjoin.c \
		ft_matrix.c \
		ft_printf.c \
		ft_printfalpha.c \
		ft_printfnum.c \
		ft_split.c \
		ft_strisnum.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strnstr.c \
		ft_substr.c \
		ft_strcmp.c \
		get_next_line.c \
		get_next_line_utils.c \

OBJS = $(SRC:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror 

all: $(NAME)

$(NAME): $(OBJS)
		ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
