# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cshirley <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/23 09:16:13 by cshirley          #+#    #+#              #
#    Updated: 2018/07/23 13:32:51 by cshirley         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = filler
SRCS = main.c
FLAGS = -Wall -Wextra -Werror
INCLUDES = filler.h

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -o $(NAME) $(SRCS) $(INCLUDES)
	gcc -I. -L./libft -lft

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
