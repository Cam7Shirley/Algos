/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshirley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 13:29:59 by cshirley          #+#    #+#             */
/*   Updated: 2018/08/20 12:37:26 by cshirley         ###   ########.fr       */
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
}					t_token;

typedef struct		s_game
{
	char			**map;
	char			**piece;
	int				i;
	int				player;
	int				x_piece;
	int				y_piece;
	int				x_board;
	int				y_board;
}					t_game;

t_token	get_token(char **m);
t_token	store_map(char **file);
int		check_valid(char **m, t_token *t);
int		get_player(char **m, char *p);
char	**fill_token(char **m, unsigned int x, int *i);
char	**get_map(char **file, unsigned int x, int i);
char	*find_start_pos(char **m, char c);
void	get_x_y(char *l, unsigned int *x, unsigned int *y);
t_game	play_game(t_game g);

#endif
