# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ytaqsi <ytaqsi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/23 11:19:47 by ytaqsi            #+#    #+#              #
#    Updated: 2022/10/25 11:22:06 by ytaqsi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCMAN = ft_atoi.c \
	ft_bzero.c \
	ft_calloc.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_itoa.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_putchar_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_putstr_fd.c \
	ft_split.c \
	ft_strchr.c \
	ft_strdup.c \
	ft_striteri.c \
	ft_strjoin.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strmapi.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_strtrim.c \
	ft_substr.c \
	ft_tolower.c \
	ft_toupper.c \

SRCBON = ft_lstadd_back.c \
	ft_lstadd_front.c \
	ft_lstclear.c \
	ft_lstdelone.c \
	ft_lstiter.c \
	ft_lstlast.c \
	ft_lstmap.c \
	ft_lstnew.c \
	ft_lstsize.c \

OBJMAN = $(SRCMAN:.c=.o)
OBJBON = $(SRCBON:.c=.o)

CC = cc
CFLAGS = -Wall -Werror -Wextra
AR = ar cr
FRM = rm -rf

NAME = libft.a
HEADER = libft.h

all: $(NAME)

$(NAME): $(OBJMAN)
	$(AR) $(NAME) $(OBJMAN)

bonus: $(OBJBON)
	$(AR)  $(NAME) $(OBJBON)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $<

clean:
	$(FRM) $(OBJMAN) $(OBJBON)

fclean: clean
	$(FRM) $(NAME)

re: fclean all
