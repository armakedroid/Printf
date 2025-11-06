# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: argharag <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/01 18:47:05 by argharag          #+#    #+#              #
#    Updated: 2025/02/02 15:49:17 by argharag         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRCS = ft_myprint.c	ft_printf.c	ft_putstr.c	ft_check.c ft_print_nums.c ft_putchar.c ft_strlen.c ft_signed.c
HEADER = ft_printf.h
OBJS = $(SRCS:%.c=%.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBA = ar rcs

all: $(NAME)

$(NAME) : $(OBJS)
	$(LIBA) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -I$(HEADER) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
