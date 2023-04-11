# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mamaral- <mamaral-@student.42porto.com     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/15 15:13:34 by mamaral-          #+#    #+#              #
#    Updated: 2023/04/11 12:21:17 by mamaral-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a
CC			= cc
CFLAGS		= -Wall -Wextra -Werror -g
AR			= ar rc
RM			= rm -rf

SRCS			= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
					ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
					ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
					ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
					ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
					ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
					ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
					ft_isspace.c ft_intlen.c ft_arrlen.c ft_printf.c ft_putcharpf.c \
					ft_putstrpf.c ft_puthexpf.c ft_putnbrpf.c ft_putunbrpf.c \
					ft_putptrpf.c
B_SRCS		= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
					ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c


OBJS		= ${SRCS:.c=.o}
B_OBJS		= ${B_SRCS:.c=.o}

all:		bonus

$(NAME):	${OBJS}
			${AR} ${NAME} ${OBJS}

bonus:		${OBJS} ${B_OBJS}
			${AR} ${NAME} ${B_OBJS} ${OBJS}

clean:
			${RM} *.*o

fclean:		clean
			${RM} *.a

re:			fclean all
