/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   token.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshirley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 07:06:30 by cshirley          #+#    #+#             */
/*   Updated: 2018/08/20 08:39:13 by cshirley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

char	**fill_token(char **m, unsigned int x, int *i)
{
	char			*temp;
	char			**tkn = NULL;
	unsigned int	index;

	index = 0;
	tkn = (char**)(malloc(sizeof(*tkn) * x));
	while (m[*i])
	{
		temp = ft_strnew(0);
		temp = ft_strjoin(temp, m[*i]);
		if (index < x)
		{
			tkn[index] = ft_strnew(ft_strlen(temp));
			tkn[index] = ft_strjoin(tkn[index], temp);
			index++;
		}
		*i = *i + 1;
	}
	return (tkn);
}

token	get_token(char **m)
{
	token	tkn;
	char	*line;
	char	**temp;
	int		index;

	index = 0;
	while (m[index])
	{
		line = ft_strnew(0);
		line = ft_strjoin(line, m[index]);
		if (line[0] == 'P' && ft_strstr(line, "Piece"))
		{
			temp = ft_strsplit(line, ' ');
			tkn.x = ft_atoi(temp[1]);
			tkn.y = ft_atoi(temp[2]);
		}
		if (tkn.x != 0 && tkn.y != 0)
		{
			index++;
			break ;
		}
		index++;
	}
	tkn.piece = fill_token(m, tkn.x, &index);
	return (tkn);
}

//int		check_valid(char **m, token *t)
//{
//}
