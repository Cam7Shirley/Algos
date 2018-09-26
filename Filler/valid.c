/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshirley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 10:27:25 by cshirley          #+#    #+#             */
/*   Updated: 2018/09/11 12:26:46 by cshirley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int	is_placement(t_game g, int x, int y)
{
	if (g.map[x][y] == g.player || g.map[x][y] == g.player + 32)
		return (1);
	else
		return (0);
}

int	check_bounds(t_game g)
{
}

int	check_valid(t_game g)
{
	if (check_bounds(g) == 0)
		return (0);
	else if (check_placement(g) == 0)
		return (0);
	else
		return (1);
}
