# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asayakov <asayakov@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/26 00:32:06 by asayakov          #+#    #+#              #
#    Updated: 2020/01/26 16:42:34 by asayakov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRC = main.c solution.c validate.c map.c helper.c

OBJ = $(SRC:.c=.o)

INC = -I includes

LIBFT =	libft/libft.a

all: $(NAME)

$(NAME): $(LIBFT) $(OBJ)
		gcc -Wall -Wextra -Werror $(OBJ) -o $(NAME) $(LIBFT)

$(OBJ): $(LIBFT)
		gcc -Wall -Wextra -Werror $(FLAGS) -c $(SRC)

$(LIBFT):
		make -C ./libft/

clean:
		rm -f $(OBJ)
			make clean -C ./libft/

fclean: clean
		rm -f $(NAME)
			make fclean -C ./libft/

re: fclean all

.PHONY : all, re, clean, flcean