# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: achakour <achakour@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/30 14:59:43 by achakour          #+#    #+#              #
#    Updated: 2023/11/30 15:02:07 by achakour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =  ft_memcmp.c ft_putchar_fd.c ft_split.c ft_strmapi.c            \
		ft_strlcat.c ft_strncmp.c ft_substr.c ft_atoi.c ft_isalpha.c    \
		ft_itoa.c ft_memcpy.c  ft_putendl_fd.c ft_strchr.c  ft_strlcpy.c \
		ft_strnstr.c ft_tolower.c ft_bzero.c ft_isascii.c ft_striteri.c   \
		ft_memmove.c ft_putnbr_fd.c  ft_strdup.c  ft_strlen.c  ft_strrchr.c\
		ft_toupper.c ft_calloc.c  ft_isdigit.c ft_memchr.c  ft_memset.c     \
		ft_putstr_fd.c  ft_strjoin.c ft_strtrim.c ft_isalnum.c ft_isprint.c

BONUS = ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c \
		ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstlast_bonus.c          \
		ft_lstmap_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c

OBJ = $(SRCS:.c=.o)
BONUS_OBJ = $(BONUS:.c=.o)

CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
AR = ar rcs
RM = rm -f
CC = cc

all: $(NAME)

$(NAME): $(OBJ)

%.o :%.c
	$(CC) -c $(CFLAGS) $^ -o $@
	$(AR) $(NAME) $@

bonus: $(BONUS_OBJ)

clean:
	$(RM) $(OBJ) $(BONUS_OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all