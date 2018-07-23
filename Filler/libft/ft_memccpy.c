/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshirley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 06:48:03 by cshirley          #+#    #+#             */
/*   Updated: 2018/05/24 07:28:51 by cshirley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char	*dest;
	char	*source;
	size_t	index;
	char	ch;

	dest = (char*)dst;
	source = (char*)src;
	index = 0;
	ch = c;
	while (index < n)
	{
		dest[index] = source[index];
		if (dest[index] == ch)
			return (&dest[index + 1]);
		index++;
	}
	return (NULL);
}
