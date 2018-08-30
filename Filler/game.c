/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshirley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 12:02:43 by cshirley          #+#    #+#             */
/*   Updated: 2018/08/30 07:50:17 by cshirley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

t_game	find_shape(t_game g)
{
	int	ix;
	int	iy;

	ix = 0;
	iy = 0;
	while (ix < g.x_board)
	{
		while (iy < g.y_board)
		{
			if ((g.map[ix][iy] == 'O' || g.map[ix][iy] == 'o') && g.player == 1)
			{
				g.x_placer = ix;
				g.y_placer = iy;
				return (g);
			}
			else if ((g.map[ix][iy] == 'X' || g.map[ix][iy] == 'x') && g.player == 2)
			{
				g.x_placer = ix;
				g.y_placer = iy;
			}
			iy++;
		}
		ix++;
		iy = 0;
	}
	return (g);
}

void	place_piece(t_game g)
{
	dprintf(2, "X: %d", g.x_placer);
	dprintf(1, "%d %d\n", g.x_placer, g.y_placer);
}
