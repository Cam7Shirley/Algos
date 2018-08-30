# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cshirley <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/30 07:35:26 by cshirley          #+#    #+#              #
#    Updated: 2018/08/30 07:39:32 by cshirley         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = lem-in
SRCS =
FLAGS = -Wall -Wextra -Werror -o

all: $(NAME)

$(NAME):
	@make -C libft
	gcc $(FLAGS) $(NAME) $(SRCS) -L./libft -lft

clean:
	@make -C libft/ clean
	rm -f *.o

fclean:	clean
	@make -C libft/ fclean
	rm -f $(NAME)

re: fclean all
