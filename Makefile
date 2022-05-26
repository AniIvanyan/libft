# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aivanyan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/21 21:19:53 by aivanyan          #+#    #+#              #
#    Updated: 2022/03/27 00:22:43 by aivanyan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS	= $(wildcard *.c)
BONUS_SRCS = $(wildcard ft_lst*.c)
MANDATORY_SRCS = $(filter-out $(BONUS_SRCS),$(SRCS))
OBJS	= $(MANDATORY_SRCS:.c=.o)
BONUS_OBJS	= $(BONUS_SRCS:.c=.o)
CC		= cc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f
AR		= ar rcs

all: $(NAME)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
	
bonus: $(NAME) $(BONUS_OBJS) 
	$(AR) $(NAME) $(BONUS_OBJS)
	
clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: bonus clean fclean re all