# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cshirley <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/23 09:16:13 by cshirley          #+#    #+#              #
#    Updated: 2018/08/20 12:04:20 by cshirley         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = filler
SRCS = 
FLAGS = -Wall -Wextra -Werror
INCLUDES = filler.h

all: $(NAME)

$(NAME):
	gcc -o $(NAME) $(FLAGS) $(SRCS) -L./libft -lft

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
