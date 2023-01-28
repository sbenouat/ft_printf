# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbenouat <sbenouat@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/28 09:06:13 by sbenouat          #+#    #+#              #
#    Updated: 2023/01/28 09:07:59 by sbenouat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_printf.c ft_printf_utils.c
OBJS	= ${SRCS:.c=.o}
NAME	= libftprintf.a
LIBC	= ar rcs
CC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror
INCS	= -L ./libft -lft

all: ${NAME}

${NAME}: ${OBJS}
		make -C ./libft
		@cp ./libft/libft.a .
		@mv libft.a ${NAME}
		${LIBC} ${NAME} ${OBJS}
		@echo "LibPrintf Done !"

libft :
		make bonus -C ./libft

compile : libft
	${CC} ${CFLAGS} ${SRCS} ${INCS}
	./a.out

clean:
		${RM} ${OBJS}
		make clean -C ./libft

fclean: clean
		${RM} ${NAME}
		rm -f ./libft/libft.a

re: fclean all

.PHONY: all clean fclean re libft
