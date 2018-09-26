/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshirley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 12:02:43 by cshirley          #+#    #+#             */
/*   Updated: 2018/09/22 11:01:58 by cshirley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

t_game	find_pos(t_game g)
{
	int	ix;
	int	iy;

	ix = 0;
	iy = 0;
	while (ix < g.x_board)
	{
		while (iy < g.y_board)
		{
			if (g.map[ix][iy] == g.player || g.map[ix][iy] == g.player + 32)
			{
				g.x_placer = ix;
				g.y_placer = iy;
			}
			iy++;
		}
		ix++;
		iy = 0;
	}
	g = alloc_score(g);
	g = make_scores(g);
	g = find_best_pos(g);
	return (g);
}

void	place_piece(t_game g)
{
	if (check_valid(g) == 1)
	{
		ft_putnbr(g.x_placer);
		ft_putchar(' ');
		ft_putnbr(g.y_placer);
		ft_putchar('\n');
	}
	else
	{
		ft_putnbr(0);
		ft_putchar(' ');
		ft_putnbr(0);
		ft_putchar('\n');
	}
}
