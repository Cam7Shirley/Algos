/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshirley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 08:12:36 by cshirley          #+#    #+#             */
/*   Updated: 2018/09/27 12:53:35 by cshirley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

t_game	get_player(t_game g, char *line)
{
	get_next_line(0, &line);
	if (line[0] == '$')
	{
		if (ft_strstr(line, "p1"))
		{
			g.player = 'O';
			g.opp = 'X';
		}
		else if (ft_strstr(line, "p2"))
		{
			g.player = 'X';
			g.opp = 'O';
		}
	}
	return (g);
}
