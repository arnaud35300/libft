# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arguilla <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/26 21:39:55 by arguilla          #+#    #+#              #
#    Updated: 2020/10/14 01:08:59 by arguilla         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
HEADERS = libft.h
SRCS = ft_strlen.c\
	   ft_toupper.c\
	   ft_tolower.c\
	   ft_isalpha.c\
	   ft_isdigit.c\
	   ft_isalnum.c\
	   ft_isprint.c\
	   ft_isascii.c\
	   ft_atoi.c\
	   ft_bzero.c\
	   ft_calloc.c\
	   ft_strchr.c\
	   ft_strdup.c
OBJS = $(SRCS:.c=.o)
CC = gcc
RM = rm -f

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME) : $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

%.o: %.c
	$(CC) -o $@ -c $< $(CFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean re fclean

