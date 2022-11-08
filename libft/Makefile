# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mserrouk <mserrouk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/29 02:29:42 by mserrouk          #+#    #+#              #
#    Updated: 2022/11/08 19:03:29 by mserrouk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FILES = ft_atoi.c \
	ft_bzero.c    \
	ft_calloc.c		\
	ft_isalnum.c	\
	ft_isalpha.c	\
	ft_isascii.c	\
	ft_isdigit.c	\
	ft_isprint.c	\
	ft_itoa.c		\
	ft_memchr.c		\
	ft_memcmp.c		\
	ft_memcpy.c		\
	ft_memmove.c	\
	ft_memset.c		\
	ft_putchar_fd.c	\
	ft_putendl_fd.c	\
	ft_putnbr_fd.c	\
	ft_putstr_fd.c	\
	ft_split.c		\
	ft_strchr.c		\
	ft_strdup.c		\
	ft_striteri.c	\
	ft_strjoin.c	\
	ft_strlcat.c	\
	ft_strlcpy.c	\
	ft_strlen.c		\
	ft_strmapi.c	\
	ft_strncmp.c	\
	ft_strnstr.c	\
	ft_strrchr.c	\
	ft_strtrim.c	\
	ft_substr.c		\
	ft_tolower.c	\
	ft_toupper.c	

BONUSRC = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
			ft_lstdelone.c ft_lstclear.c

CC = cc
FLG = -Wall -Wextra -Werror
AR = ar rc
RM = rm -f

OBJ = $(FILES:.c=.o)

BBJ= $(BONUSRC:.c=.o) 


		
all : $(NAME)

$(NAME) : $(OBJ)
	$(AR)  $(NAME) $(OBJ) 


bonus : $(BBJ)
	$(AR)  $(NAME) $(BBJ)
		
%.o :%.c libft.h
	$(CC) $(FLG) -c $< 

clean :
	$(RM) $(OBJ)  $(BBJ)

fclean : clean
	$(RM) $(NAME) $(BBJ)

re : clean all bonus