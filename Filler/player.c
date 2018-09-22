/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshirley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 08:12:36 by cshirley          #+#    #+#             */
/*   Updated: 2018/09/22 10:50:38 by cshirley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

t_game	get_player(t_game g, char *line)
{
	get_next_line(0, &line);
	if (line[0] == '$')
	{
		if (ft_strstr(line, "p1"))
			g.player = 'O';
		else if (ft_strstr(line, "p2"))
			g.player = 'X';
	}
	return (g);
}
