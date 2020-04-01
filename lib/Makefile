# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msoares <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/21 17:56:35 by msoares           #+#    #+#              #
#    Updated: 2020/02/08 12:58:35 by msoares          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME	= libft.a
SRCS	= ft_bzero.c ft_isalpha.c ft_isascii.c \
		  ft_isdigit.c ft_isprint.c ft_memcpy.c \
		  ft_memccpy.c ft_memchr.c ft_memcmp.c \
		  ft_memmove.c ft_memset.c ft_strchr.c \
		  ft_strlcat.c ft_strlcpy.c ft_strlen.c \
		  ft_strncmp.c ft_tolower.c ft_toupper.c \
		  ft_isalnum.c ft_strrchr.c ft_atoi.c \
		  ft_strnstr.c ft_calloc.c ft_strdup.c \
		  ft_substr.c ft_strjoin.c ft_strtrim.c \
		  ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
		  ft_putnbr_fd.c ft_split.c ft_strmapi.c \
		  ft_itoa.c
BONUS	= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
		  ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
		  ft_lstclear.c ft_lstiter.c ft_lstmap.c
OBJECTS	=ft_bzero.o ft_isalpha.o ft_isascii.o \
          ft_isdigit.o ft_isprint.o ft_memcpy.o \
          ft_memccpy.o ft_memchr.o ft_memcmp.o \
          ft_memmove.o ft_memset.o ft_strchr.o \
          ft_strlcat.o ft_strlcpy.o ft_strlen.o \
          ft_strncmp.o ft_tolower.o ft_toupper.o \
          ft_isalnum.o ft_strrchr.o ft_atoi.o \
		  ft_strnstr.o ft_calloc.o ft_strdup.o \
		  ft_substr.o ft_strjoin.o ft_strtrim.o \
		  ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o \
		  ft_putnbr_fd.o ft_split.o ft_strmapi.o \
		  ft_itoa.o
OBJSBONUS =ft_lstnew.o ft_lstadd_front.o ft_lstsize.o \
	   		ft_lstlast.o ft_lstadd_back.o ft_lstdelone.o \
	   		ft_lstclear.o ft_lstiter.o ft_lstmap.o

INCLUDES	= ./
FLAGS	= -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS) libft.h
	@gcc $(FLAGS) -I$(INCLUDES) -c $(SRCS)
	@ar rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)

bonus: $(BONUS)
	@gcc $(FLAGS) -I$(INCLUDES) -c $(BONUS) 
	@ar rcs $(NAME) $(OBJSBONUS)

clean:
	@/bin/rm -f $(OBJECTS) $(OBJSBONUS)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
