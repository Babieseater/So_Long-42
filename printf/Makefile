# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/22 11:44:41 by smayrand          #+#    #+#              #
#    Updated: 2022/06/08 05:22:51 by smayrand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc
CFLAGS = -Wall -Werror -Wextra

SRCS = ft_printf.c\
srcs/ft_intlen_u.c\
srcs/ft_intlen_p.c\
srcs/ft_intlen.c\
srcs/ft_mod.c\
srcs/ft_modchr.c\
srcs/ft_phex.c\
srcs/ft_putchar.c\
srcs/ft_putnbr_u.c\
srcs/ft_putnbr.c\
srcs/ft_putstr.c\
srcs/ft_strlen.c

OBJS = $(SRCS:.c=.o)

RM = rm -f

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
	
.PHONY: all clean fclean re

mg:
