/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   score.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshirley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 11:03:37 by cshirley          #+#    #+#             */
/*   Updated: 2018/09/22 11:05:11 by cshirley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

t_game	find_best_pos(t_game g)
{
	int		ix;
	int		iy;
	int		hiscore;

	ix = 0;
	hiscore = 0;
	while (ix < g.x_board)
	{
		iy = 0;
		while (iy < g.y_board)
		{
			if (is_placement(g, ix, iy) == 1 && g.score[ix][iy] > hiscore)
			{
				hiscore = g.score[ix][iy];
				g.x_placer = ix;
				g.y_placer = iy;		
			}
			iy++;
		}
		ix++;
	}
	dprintf(2, "This is the high score pos X: %d Y: %d, with a high score of %d\n", g.x_placer, g.y_placer, hiscore);
	return (g);
}

t_game	alloc_score(t_game g)
{
	int		index;

	index = 0;
	g.score = (int**)malloc(g.x_board * sizeof(int*));
	while (index < g.x_board)
	{
		g.score[index] = (int*)malloc(g.y_board * sizeof(int));
		index++;
	}
	return (g);
}

t_game	make_scores(t_game g)
{
	int	ix;
	int	iy;
	int	mid_x = g.x_board / 2;
	int	mid_y = g.y_board / 2;

	ix = 0;
	while (ix < g.x_board)
	{
		iy = 0;
		while (iy < g.y_board)
		{
			if (mid_y - iy >= 0 && mid_x - ix >= 0)
				g.score[ix][iy] = MAX - ((mid_y - iy) + (mid_x - ix));
			else if (mid_y - iy < 0 && mid_x - ix >= 0)
				g.score[ix][iy] = MAX - ((iy - mid_y) + (mid_x - ix));
			else if (mid_y - iy >= 0 && mid_x - ix < 0)
				g.score[ix][iy] = MAX - ((mid_y - iy) + (ix - mid_x));
			else if (mid_y - iy < 0 && mid_x - ix < 0)
				g.score[ix][iy] = MAX - ((iy - mid_y) + (ix - mid_x));
			iy++;
		}
		ix++;
	}
	return (g);
}
