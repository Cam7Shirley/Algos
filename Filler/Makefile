# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cshirley <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/23 09:16:13 by cshirley          #+#    #+#              #
#    Updated: 2018/09/11 10:53:15 by cshirley         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = filler
SRCS = main.c player.c piece.c map.c game.c valid.c
FLAGS = -Wall -Wextra -Werror -o

all: $(NAME)

$(NAME):
	@make -C libft
	gcc $(FLAGS) $(NAME) $(SRCS) -L./libft -lft

clean:
	@make -C libft/ clean
	rm -f *.o

fclean: clean
	@make -C libft/ fclean
	rm -f $(NAME)

re: fclean all
