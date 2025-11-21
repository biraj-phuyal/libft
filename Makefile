# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: biphuyal <biphuyal@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/03 18:38:41 by biphuyal          #+#    #+#              #
#    Updated: 2025/11/21 16:32:25 by biphuyal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Werror -Wextra
NAME = libft.a
HEADER = include/libft.h
SRCS = 	mandatory/ft_isalpha.c mandatory/ft_isdigit.c mandatory/ft_isalnum.c mandatory/ft_isascii.c mandatory/ft_isprint.c \
		mandatory/ft_strlen.c mandatory/ft_memset.c mandatory/ft_bzero.c mandatory/ft_memcpy.c mandatory/ft_memmove.c \
		mandatory/ft_strlcpy.c mandatory/ft_strlcat.c mandatory/ft_toupper.c mandatory/ft_tolower.c mandatory/ft_strchr.c \
		mandatory/ft_strrchr.c mandatory/ft_strncmp.c mandatory/ft_memchr.c mandatory/ft_memcmp.c mandatory/ft_strnstr.c mandatory/ft_atoi.c \
		mandatory/ft_calloc.c mandatory/ft_strdup.c mandatory/ft_substr.c mandatory/ft_strjoin.c mandatory/ft_strtrim.c mandatory/ft_split.c \
		mandatory/ft_itoa.c mandatory/ft_strmapi.c mandatory/ft_striteri.c mandatory/ft_putchar_fd.c mandatory/ft_putstr_fd.c \
		mandatory/ft_putendl_fd.c mandatory/ft_putnbr_fd.c
BONUS = bonus/ft_lstnew.c bonus/ft_lstadd_front.c bonus/ft_lstsize.c bonus/ft_lstlast.c bonus/ft_lstadd_back.c \
	    bonus/ft_lstdelone.c bonus/ft_lstclear.c bonus/ft_lstiter.c bonus/ft_lstmap.c
AR = ar rcs

OBJS = ${SRCS:.c=.o}
BONUS_OBJS = ${BONUS:.c=.o}
all: ${NAME}

${NAME}: ${OBJS}
	${AR} ${NAME} ${OBJS} 

%.o: %.c ${HEADER}
	${CC} ${CFLAGS} -c $< -o $@

clean:
	rm -rf ${OBJS} ${BONUS_OBJS}
	rm -rf .bonus

fclean:	clean
	rm -rf ${NAME}

bonus :	${OBJS} $(BONUS_OBJS)
	${AR}	$(NAME)	${OBJS} $(BONUS_OBJS)
	touch .bonus

re:	fclean all

.PHONY:	all clean fclean re
