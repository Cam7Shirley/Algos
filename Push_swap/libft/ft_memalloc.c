/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshirley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 11:07:39 by cshirley          #+#    #+#             */
/*   Updated: 2018/05/24 11:14:01 by cshirley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*temp;
	size_t	index;

	index = 0;
	if ((temp = malloc(sizeof(char) * size)) == NULL)
		return (NULL);
	while (index < size)
	{
		temp[index] = 0;
		index++;
	}
	return (temp);
}
