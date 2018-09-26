/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   piece.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshirley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 06:36:52 by cshirley          #+#    #+#             */
/*   Updated: 2018/09/11 12:45:40 by cshirley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

t_game	make_bounds(t_game g)
{
	g.x_bound = g.x_placer + g.x_piece;
	g.y_bound = g.y_placer + g.y_piece;
	return (g);
}

t_game	store_piece(t_game g, char *line)
{
	int		index;

	index = 0;
	g.piece = (char**)(malloc(g.x_piece + 1 * sizeof(char*)));
	while (index < g.x_piece)
	{
		g.piece[index] = (char*)(malloc(g.y_piece * sizeof(char)));
		index++;
	}
	index = 0;
	while (index < g.x_piece)
	{
		get_next_line(0, &line);
		g.piece[index] = ft_strjoin(g.piece[index], line);
		index++;
	}
	g = make_bounds(g);
	return (g);
}
