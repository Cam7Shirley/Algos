/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshirley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 11:56:13 by cshirley          #+#    #+#             */
/*   Updated: 2018/09/27 13:35:16 by cshirley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int	main(void)
{
	char	*line;
	t_game	session;

	line = ft_strnew(0);
	session.i = 0;
	session = get_player(session, line);
	while (1)
	{
		session = store_map(session, line);
		session = store_piece(session, line);
		session = find_opp(session);
		if (move_placement(&session) == 0)
			session.no_moves = 1;
		place_piece(session);
		if (session.destroy == 1)
			break ;
	}
	return (0);
}
