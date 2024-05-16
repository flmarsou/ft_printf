# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/13 15:43:02 by flmarsou          #+#    #+#              #
#    Updated: 2024/05/14 10:27:24 by flmarsou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB = libftprintf.a

SRC = ./src/ft_printf.c \
	  ./src/ft_putchr.c \
	  ./src/ft_puthex.c \
	  ./src/ft_putnbr.c \
	  ./src/ft_putptr.c \
	  ./src/ft_putstr.c \
	  ./src/ft_putuni.c

OBJ = ${SRC:.c=.o}

CC = cc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f

DEF_COLOR = \033[0;39m
COLOR = \033[1;32m

all:		${LIB}

%.o:		%.c
		@${CC} ${CFLAGS} -c $? -o $@
		@echo "${COLOR}$?		✓${DEF_COLOR}"

${LIB}:		${OBJ}
		@ar rcs $@ $?
		@echo "${COLOR}╔═══════════════════════╗${DEF_COLOR}"
		@echo "${COLOR}║  ft_printf compiled!  ║${DEF_COLOR}"
		@echo "${COLOR}╚═══════════════════════╝${DEF_COLOR}"

clean:
		@${RM} ${OBJ}
		@echo "${COLOR}╔═══════════════════════╗${DEF_COLOR}"
		@echo "${COLOR}║  ft_printf cleaned!   ║${DEF_COLOR}"
		@echo "${COLOR}╚═══════════════════════╝${DEF_COLOR}"

fclean:		clean
		@${RM} ${LIB}

re:			fclean all

.PHONY: all clean fclean re