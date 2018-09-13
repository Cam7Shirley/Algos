#include "./libft/libft.h"
#include <stdio.h>

typedef	struct		s_stack
{
	int				top;
	int				capacity;
	int				*data;
}					t_stack;

int				is_empty(t_stack *st);
int				find_highest(t_stack *st, int n);
int				find_lowest(t_stack *st_f, t_stack *st_t, int n);
int				check_sorted(t_stack *st_a, t_stack *st_b);
int				find_b_highest(t_stack *st_b, int n);
int				check_sorted_b(t_stack *st_b);
t_stack			new_stack(int c);
void			check_b(t_stack *st_a, t_stack *st_b);
void			find_b_lowest(t_stack *st_b, int n);
void			do_things(t_stack *st_a, t_stack *st_b);
void			check_duplicates(int *d, int n);
void			print_stack(t_stack *st);
void			fill_stack(t_stack *st, int *d, int i);
void			push_a(t_stack *st_a, t_stack *st_b);
void			swap_a(t_stack *st_a);
void			rotate_a(t_stack *st_a);
void			rev_rotate_a(t_stack *st_a);
void			push_b(t_stack *st_a, t_stack *st_b);
void			swap_b(t_stack *st_b);
void			rotate_b(t_stack *st_b);
void			rev_rotate_b(t_stack *st_b);
void			do_push_swap(int *d, int i);
void			do_things(t_stack *st_a, t_stack *st_b);
