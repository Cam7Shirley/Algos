# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cshirley <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/23 09:16:13 by cshirley          #+#    #+#              #
#    Updated: 2018/09/27 06:59:08 by cshirley         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = filler
SRCS = main.c player.c piece.c map.c game.c valid.c score.c moves.c
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
