/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshirley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 10:27:25 by cshirley          #+#    #+#             */
/*   Updated: 2018/09/27 13:31:07 by cshirley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int	check_bounds(t_game g, int x, int y)
{
	if (x + g.x_piece > g.x_board)
		return (0);
	if (y + g.y_piece > g.y_board)
		return (0);
	else
		return (1);
}

int	check_placement(t_game g, int x, int y)
{
	int	xp;
	int	yp;
	int	colls;

	xp = 0;
	colls = 0;
	while (xp < g.x_piece)
	{
		yp = 0;
		while (yp < g.y_piece)
		{
			if ((g.map[x + xp][y + yp] == g.player
					|| g.map[x + xp][y + yp] == g.player + 32)
					&& g.piece[xp][yp] == '*')
				colls++;
			else if (g.map[x + xp][y + yp] == g.opp || g.map[x + xp][y + yp]
					   	== g.opp + 32)
				return (0);
			yp++;
		}
		xp++;
	}
	return ((colls == 1) ? 1 : 0);
}

int	check_valid(t_game g, int x, int y)
{
	if (check_bounds(g, x, y) == 0)
		return (0);
	else if (check_placement(g, x, y) == 0)
		return (0);
	else
		return (1);
}
