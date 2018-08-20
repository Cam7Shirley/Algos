/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshirley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 12:02:43 by cshirley          #+#    #+#             */
/*   Updated: 2018/08/20 13:48:07 by cshirley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"
#include <stdio.h>

t_game	get_player(t_game g)
{
	char	*line;

	get_next_line(0, &line);
	if (line[0] == '$')
	{
		if (ft_strstr(line, "p1"))
			g.player = 1;
		else if (ft_strstr(line, "p2"))
			g.player = 2;
	}
	dprintf(2, "I am player %d", g.player);
	return (g);
}

t_game	get_map(t_game g)
{
	char	*line;
	int		index;

	index = 0;
	while (1)
	{
		get_next_line(0, &line);
		if (line[0] == 'P')
			break ;
		if (index < g.x_board)
		{
			g.map[index] = ft_strjoin(g.map[index], &line[4]);
			index++;
		}
		else
			break ;
	}
	return (g);
}

t_game	store_map(t_game g)
{
	char	**temp;
	char	*line;

	get_next_line(0, &line);
	if (line[0] == 'P' && ft_strstr(line, "Plateau"))
	{
		temp = ft_strsplit(line, ' ');
		g.x_board = ft_atoi(temp[1]);
		g.y_board = ft_atoi(temp[2]);
	}
	g.map = (char**)(malloc(sizeof(char*) * g.y_board));
	g = get_map(g);
	return (g);
}
