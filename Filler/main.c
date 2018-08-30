/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshirley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 11:56:13 by cshirley          #+#    #+#             */
/*   Updated: 2018/08/30 07:34:52 by cshirley         ###   ########.fr       */
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
	session = store_map(session, line);
	session = store_piece(session, line);
	session = find_shape(session);
	place_piece(session);
	return (0);
}
