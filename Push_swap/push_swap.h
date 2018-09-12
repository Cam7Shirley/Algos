#include "./libft/libft.h"

typedef	struct		s_stack
{
	int		top;
	unsigned int	capacity;
	int		*data;
}			t_stack;

t_stack			new_stack(unsigned int c);
int			is_full(t_stack *st);
int			is_empty(t_stack *st);
void			check_duplicates(int *d, int n);
void			exec_task(char *s, t_stack *st_a, t_stack *st_b);
void			print_stack(t_stack *st);
void			fill_stack(t_stack *st, int *d, int i);
void			push(t_stack *st_f, t_stack *st_t);
void			pop(t_stack *st);
void			swap(t_stack *st);
void			rotate(t_stack *st);
void			rev_rotate(t_stack *st);
void			do_push_swap(int *d, int i);
