#* ************************************************************************** *#
#*                                                                            *#
#*                                                        :::      ::::::::   *#
#*   Makefile                                           :+:      :+:    :+:   *#
#*                                                    +:+ +:+         +:+     *#
#*   By: gquesnot <gquesnot@student.le-101.fr>      +#+  +:+       +#+        *#
#*                                                +#+#+#+#+#+   +#+           *#
#*   Created: 2017/09/30 20:21:34 by gquesnot          #+#    #+#             *#
#*   Updated: 2017/09/30 23:00:35 by gquesnot         ###   ########.fr       *#
#*                                                                            *#
#* ************************************************************************** *#

NAME	= libft.a

CFLAGS	= -Wall -Werror -Wextra

SRCS	= ft_bzero.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
			ft_memmove.c ft_memset.c ft_strcat.c ft_strchr.c \
			ft_strcpy.c ft_strdup.c ft_strlcat.c ft_strlen.c ft_strncat.c \
			ft_strrchr.c ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
			ft_isdigit.c ft_isprint.c ft_strcmp.c ft_strncmp.c ft_strstr.c \
			ft_strncpy.c ft_strnstr.c ft_tolower.c ft_toupper.c

OBJS = $(SRCS:.c=.o)

HEADERS = libft.h

all: $(NAME)

$(NAME):
		gcc $(CFLAGS) -c $(SRCS)
		ar rc $(NAME) $(OBJS)
		ranlib $(NAME)

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all
