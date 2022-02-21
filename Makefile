# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zcherkao <zcherkao@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/14 17:54:58 by zcherkao          #+#    #+#              #
#    Updated: 2021/11/19 21:06:56 by zcherkao         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror 

NAME = libft.a

SRC     =       ft_atoi.c    \
		ft_isalpha.c    \
		ft_memchr.c    \
		ft_memset.c    \
		ft_strncmp.c    \
		ft_bzero.c    \
		ft_isascii.c    \
		ft_memcmp.c    \
		ft_strlcat.c    \
		ft_strnstr.c    \
		ft_tolower.c    \
		ft_calloc.c    \
		ft_isdigit.c    \
		ft_memcpy.c    \
		ft_strchr.c    \
		ft_strlcpy.c    \
		ft_strrchr.c    \
		ft_toupper.c    \
		ft_isalnum.c    \
		ft_isprint.c    \
		ft_memmove.c    \
		ft_strdup.c    \
		ft_strlen.c    \
		ft_putchar_fd.c	\
		ft_putnbr_fd.c	\
		ft_putendl_fd.c	\
		ft_putstr_fd.c	\
		ft_strjoin.c    \
		ft_itoa.c        \
		ft_substr.c     \
		ft_strtrim.c    \
		ft_strmapi.c    \
		ft_striteri.c   \
		ft_split.c      \
		
OBJS = 	$(SRC:.c=.o)

%.o : %.c libft.h
		echo	$-c
		$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
		ar rcs $(NAME) $(OBJS)
			
clean: 
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean $(NAME)
	
.PHONY: all clean fclean re			