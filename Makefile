# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybensell <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/15 12:59:43 by ybensell          #+#    #+#              #
#    Updated: 2021/11/17 07:18:24 by ybensell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_print_ptr.c ft_unsigned_itoa.c ft_print_str.c\
	  ft_is_conversion.c ft_print_unsigned.c ft_print.c\
	  ft_printf.c  ft_print_char.c ft_print_hex.c\
      ft_putchar.c ft_print_int.c ft_putstr.c\
	  ft_itoa.c ft_substr.c ft_isdigit.c ft_strjoin.c\
	  ft_strlen.c ft_tolower.c 

OBJ = $(SRC:.c=.o)
AR = ar rc
RM = rm -f
LIB = ft_printf.h
NAME = libftprintf.a
LIBFT = libft/libft.a
LIBFT_P = ./libft
LIBFT_A = libft.a

all : $(NAME)


$(NAME): $(OBJ) $(LIB) 
	$(AR) $(NAME) $(OBJ)  

clean :
	$(RM) $(OBJ) 

fclean : clean
	$(RM) $(NAME)

re : fclean all
