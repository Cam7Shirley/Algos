/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshirley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 11:56:13 by cshirley          #+#    #+#             */
/*   Updated: 2018/09/11 12:26:56 by cshirley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int	main(void)
{
	char	*line;
	t_game	session;
	int		index;

	index = 0;
	line = ft_strnew(0);
	session.i = 0;
	session = get_player(session, line);
	while (1)
	{
		session = store_map(session, line);
		session = store_piece(session, line);
		session = find_shape(session);
		if (check_validity(session) == 1)
			place_piece(session);
		else
			break ;
	}
	return (0);
}
