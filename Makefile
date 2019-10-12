# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: alidy <alidy@student.le-101.fr>            +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2019/10/10 09:32:01 by alidy        #+#   ##    ##    #+#        #
#    Updated: 2019/10/10 12:54:59 by alidy       ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME 	= 	libft.a
CC		=	gcc
FLAG 	= 	-Wall -Wextra -Werror
OPTION	= 	-c
SRCS	= 	ft_atoi.c		\
			ft_bzero.c		\
			ft_isalnum.c	\
			ft_isalpha.c	\
			ft_isascii.c	\
			ft_isdigit.c	\
			ft_isprint.c	\
			ft_memccpy.c	\
			ft_memchr.c		\
			ft_memcmp.c		\
			ft_memcpy.c		\
			ft_memmove.c 	\
			ft_memset.c		\
			ft_strchr.c		\
			ft_strdup.c		\
			ft_strjoin.c	\
			ft_strlcat.c	\
			ft_strlcpy.c	\
			ft_strlen.c		\
			ft_strncmp.c	\
			ft_strnstr.c	\
			ft_strrchr.c	\
			ft_strtrim.c	\
			ft_substr.c 	\
			ft_tolower.c	\
			ft_toupper.c	\
			

OBJS	= 	$(SRCS:.c=.o)

all		: 	$(NAME)

$(NAME)	:	$(OBJS)
			gcc $(FLAG) $(OPTION) $(SRCS)
			gcc $(FLAG) -o $(NAME) $(OBJS)

clean	:
			rm -f $(OBJS)

fclean	:	clean	
			rm -f $(NAME)

re		: 	fclean all