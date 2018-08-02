/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshirley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 13:29:59 by cshirley          #+#    #+#             */
/*   Updated: 2018/08/02 14:22:05 by cshirley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H
# define FILLER_H
# include "./libft/libft.h"
# include <fcntl.h>

typedef struct		s_token
{
	char			**piece;
	unsigned int	x;
	unsigned int	y;
}					token;

token	get_token(char **m);
token	new_token(token t, unsigned int a, unsigned int b);
int		get_player(char **m, char *p);
char	**fill_token(char **m, int x, int y, int i);

#endif
