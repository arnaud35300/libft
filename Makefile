# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arguilla <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/26 21:39:55 by arguilla          #+#    #+#              #
#    Updated: 2020/11/03 19:00:42 by arguilla         ###   ########.fr        #
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
	   ft_strrchr.c\
	   ft_strdup.c\
	   ft_strncmp.c\
	   ft_strlcat.c\
	   ft_strlcpy.c\
	   ft_memset.c\
	   ft_memcpy.c\
	   ft_memccpy.c\
	   ft_strnstr.c\
	   ft_memchr.c\
	   ft_memcmp.c\
	   ft_memmove.c\
	   ft_itoa.c\
	   ft_substr.c\
	   ft_strjoin.c\
	   ft_strtrim.c\
	   ft_split.c\
	   ft_strmapi.c\
	   ft_putchar_fd.c\
	   ft_putstr_fd.c\
	   ft_putendl_fd.c\
	   ft_putnbr_fd.c\
	   ft_lstnew.c\
	   ft_lstadd_front.c\
	   ft_lstsize.c\
	   ft_lstlast.c\
	   ft_lstadd_back.c
	
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

