/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshirley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 13:29:59 by cshirley          #+#    #+#             */
/*   Updated: 2018/08/06 11:15:48 by cshirley         ###   ########.fr       */
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
token	new_token(token *t, unsigned int a, unsigned int b);
int		check_valid(char **m, token *t);
int		get_player(char **m, char *p);
char	**fill_token(char **m, int x, int y, int i);
char	**store_map(char **file);
char	*find_start_pos(char **m, char c);
void	overwrite_prev(char c);
void	get_x_y(char *l, unsigned int *x, unsigned int *y);
void	store_piece(char *l, token *t, int *i);

#endif
