# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rcrestey <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/06 19:05:15 by rcrestey          #+#    #+#              #
#    Updated: 2018/11/06 20:19:35 by rcrestey         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = main.c

OBJ = main.o

all: $(NAME)

$(NAME): 
		gcc -Wall -Werror -Wextra -c $(SRC)
		gcc -o $(NAME) $(OBJ)

clean: 
	rm -f $(OBJ)
	
fclean: clean
	rm -f $(NAME)
