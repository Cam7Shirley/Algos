/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshirley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/27 06:58:45 by cshirley          #+#    #+#             */
/*   Updated: 2018/09/27 13:32:20 by cshirley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int		move_placement(t_game *g)
{
	int	ix;
	int	iy;
	int	m;
	int	hiscore;

	ix = 0;
	hiscore = 0;
	m = 0;
	while (ix < g->x_board)
	{
		iy = 0;
		while (iy < g->y_board)
		{
			if (check_valid(*g, ix, iy) == 1 && hiscore < g->score[ix][iy])
			{
				g->x_placer = ix;
				g->y_placer = iy;
				hiscore = g->score[ix][iy];
				m++;
			}
			iy++;
		}
		ix++;
	}
	return ((m > 0) ? 1 : 0);
}
