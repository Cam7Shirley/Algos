/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshirley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 08:29:34 by cshirley          #+#    #+#             */
/*   Updated: 2018/09/12 09:20:12 by cshirley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		find_b_highest(t_stack *st_b, int n)
{
	int	index;
	int	high;
	int pos;

	index = 0;
	pos = 0;
	while (index < n)
	{
		if (st_b->data[index] > high)
		{
			pos = index;
			high = st_b->data[index];
		}
		index++;
	}
	if (pos == st_b->top - 1)
		return (1);
	else if (pos == 0)
	{
		rev_rotate_b(st_b);
		return (1);
	}
	return (0);
}

void	find_b_lowest(t_stack *st_b, int n)
{
	int	index;
	int	low;
	int	pos;

	index = 0;
	pos = 0;
	while (index < n)
	{
		if (st_b->data[index] < low)
		{
			pos = index;
			low = st_b->data[index];
		}
		index++;
	}
	if (pos == st_b->top - 1)
		rotate_b(st_b);
}

int		check_sorted_b(t_stack *st_b)
{
	int	index;
	int	sorted;

	index = 0;
	sorted = 1;
	while (index < st_b->top - 1 && sorted == 1)
	{
		if (st_b->data[index] < st_b->data[index + 1] && index < st_b->top - 2)
			sorted = 1;
		else
			sorted = 0;
		index++;
	}
	if (sorted == 1)
		return (1);
	else
		return (0);
}

void	check_b(t_stack *st_a, t_stack *st_b)
{
	int	flag;

	flag = 1;
	while (flag == 1)
	{
		find_b_lowest(st_b, st_b->top - 1);
		if (find_b_highest(st_b, st_b->top - 1) == 1)
			push_a(st_a, st_b);
		else if (st_b->data[st_b->top - 1] < st_b->data[st_b->top - 2])
			swap_b(st_b);
		if (check_sorted_b(st_b) == 1)
		{
			while (is_empty(st_b) == 0)
				push_a(st_a, st_b);
			if (is_empty(st_b) == 1)
				flag = 0;
		}
	}
}
