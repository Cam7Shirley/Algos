/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshirley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 12:02:43 by cshirley          #+#    #+#             */
/*   Updated: 2018/09/27 09:30:47 by cshirley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

t_game	find_opp(t_game g)
{
	int	ix;
	int	iy;

	ix = 0;
	g = alloc_score(g);
	while (ix < g.x_board)
	{
		iy = 0;
		while (iy < g.y_board)
		{
			if (g.map[ix][iy] == g.opp || g.map[ix][iy] == g.opp + 32)
			{
				g.x_opp = ix;
				g.y_opp = iy;
			}
			iy++;
		}
		ix++;
	}
	g = make_scores(g);
	return (g);
}

void	place_piece(t_game g)
{
	if (g.no_moves == 1)
	{
		g.destroy = 1;
	}
	ft_putnbr(g.x_placer);
	ft_putchar(' ');
	ft_putnbr(g.y_placer);
	ft_putchar('\n');
}
