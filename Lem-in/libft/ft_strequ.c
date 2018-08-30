/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshirley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 11:49:21 by cshirley          #+#    #+#             */
/*   Updated: 2018/06/11 06:44:03 by cshirley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	size_t	index;

	index = 0;
	if (s1 != NULL && s2 != NULL)
	{
		while (s1[index] != '\0' || s2[index] != '\0')
		{
			if (s1[index] != s2[index])
				return (0);
			index++;
		}
		return (1);
	}
	else
		return (0);
}
