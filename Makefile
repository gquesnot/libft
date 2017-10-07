#* ************************************************************************** *#
#*                                                                            *#
#*                                                        :::      ::::::::   *#
#*   Makefile                                           :+:      :+:    :+:   *#
#*                                                    +:+ +:+         +:+     *#
#*   By: gquesnot <gquesnot@student.le-101.fr>      +#+  +:+       +#+        *#
#*                                                +#+#+#+#+#+   +#+           *#
#*   Created: 2017/09/30 20:21:34 by gquesnot          #+#    #+#             *#
#*   Updated: 2017/10/08 01:11:24 by gquesnot         ###   ########.fr       *#
#*                                                                            *#
#* ************************************************************************** *#

NAME	= libft.a

CFLAGS	= -Wall -Werror -Wextra

SRCS	= ft_bzero.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
			ft_memmove.c ft_memset.c ft_strcat.c ft_strchr.c \
			ft_strcpy.c ft_strdup.c ft_strlcat.c ft_strlen.c ft_strncat.c \
			ft_strrchr.c ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
			ft_isdigit.c ft_isprint.c ft_strcmp.c ft_strncmp.c ft_strstr.c \
			ft_strncpy.c ft_strnstr.c ft_tolower.c ft_toupper.c ft_putchar.c \
			ft_putstr.c ft_putnbr.c ft_itoa.c ft_putchar_fd.c ft_putendl.c \
			ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_strtrim.c \
			ft_strsub.c ft_strsplit.c ft_strnew.c ft_strnequ.c ft_strmapi.c \
			ft_strmap.c ft_strjoin.c ft_striteri.c ft_striter.c ft_strequ.c \
			ft_strdel.c ft_strclr.c ft_memdel.c ft_memalloc.c

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
