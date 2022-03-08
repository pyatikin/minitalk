# ************************************************************************** #
#                                                                            #
#                                                        :::      ::::::::   #
#   Makefile                                           :+:      :+:    :+:   #
#                                                    +:+ +:+         +:+     #
#   By: dmerrill <dmerrill@student.21-school.ru>   +#+  +:+       +#+        #
#                                                +#+#+#+#+#+   +#+           #
#   Created: 2021/10/27 18:07:17 by dmerrill          #+#    #+#             #
#   Updated: 202#   Updated: 2022/01/12 14:34:55 by                  ###   ########.fr       #                                              #									 #
# ************************************************************************** #

NAME = libft.a

SRC = ft_atoi.c ft_bzero.c ft_calloc.c\
	ft_isalnum.c ft_isalpha.c ft_isascii.c\
	ft_isdigit.c ft_isprint.c ft_itoa.c\
	ft_memchr.c ft_memcmp.c ft_memcpy.c\
	ft_memmove.c ft_memset.c ft_putchar_fd.c\
	ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c\
	ft_split.c ft_strchr.c ft_strdup.c \
	ft_striteri.c ft_strjoin.c ft_strlcat.c\
	ft_strlcpy.c ft_strlen.c ft_strmapi.c\
	ft_strncmp.c ft_strnstr.c ft_strrchr.c\
	ft_strtrim.c ft_substr.c ft_tolower.c\
	ft_toupper.c

INCLUDE = ./libft.h

OBJ = ${patsubst %.c,%.o, ${SRC}}

CFLAGS = -Wall -Werror -Wextra

COMPILE = cc $(CFLAGS) -c

LIB = ar rcs $(NAME)

REMOVE = rm -f

all: $(NAME)

.PHONY: all clean fclean re

%.o : %.c ${INCLUDE}
	@${COMPILE} $< -o $@

$(NAME): $(OBJ) $(INCLUDE)
	@$(LIB) $?

clean:
	@$(REMOVE) $(OBJ)

fclean: clean
	@$(REMOVE) $(NAME)

re: fclean all

norm:
	norminette

so:
	@$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
	@cc -nostartfiles -shared -o libft.so $(OBJ)
