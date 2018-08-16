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
int			check_duplicates(int *d, int n);
void			print_stack(t_stack *st);
void			fill_stack(t_stack *st, int *d, int i);
void			push(t_stack *st, int n);
void			pop(t_stack *st);
void			swap(t_stack *st);
void			rotate(t_stack *st);
void			rev_rotate(t_stack *st);
