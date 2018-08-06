/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   token.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshirley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 07:06:30 by cshirley          #+#    #+#             */
/*   Updated: 2018/08/06 11:08:08 by cshirley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

token	new_token(token *t, unsigned int a, unsigned int b)
{
	t->x = a;
	t->y = b;
	return (*t);
}

char	**fill_token(char **m, int x, int y, int i)
{
	char	**tkn;
	char	*line;
	int		indexx;
	int		indexy;

	indexx = 0;
	indexy = 0;
	while (indexx < x)
	{
		line = ft_strnew(0);
		line = ft_strjoin(line, m[i]);
		while (indexy < y)
		{
			tkn[indexx][indexy] = line[indexy];
			indexy++;
		}
		tkn[indexx][indexy] = '\0';
		indexy = 0;
		i++;
		indexx++;
	}
	return (tkn);
}

token	get_token(char **m)
{
	token	tkn;
	char	*line;
	char	**temp;
	int		index;
	int		i;

	tkn = new_token(&tkn, 0, 0);
	index = 0;
	i = 0;
	while (m[index])
	{
		line = ft_strnew(0);
		line = ft_strjoin(line, m[index]);
		if (line[0] == 'P' && (line = ft_strstr(line, "Piece")))
		{
			temp = ft_strsplit(line, ' ');
			tkn.x = ft_atoi(temp[1]);
			tkn.y = ft_atoi(temp[2]);
		}
		if (tkn.x == 0 && tkn.y == 0)
			index++;
		else
			break ;
	}
	index++;
	tkn.piece = fill_token(m, tkn.x, tkn.y, index);
	return (tkn);
}

//int		check_valid(char **m, token *t)
//{
//}
