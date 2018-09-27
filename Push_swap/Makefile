NAME = push_swap
SRCS = main.c errors.c stack.c push_swap.c funcs_a.c funcs_b.c
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
