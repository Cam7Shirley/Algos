/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshirley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 06:56:31 by cshirley          #+#    #+#             */
/*   Updated: 2018/05/24 10:08:41 by cshirley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dest;
	unsigned char	*source;
	size_t			index;

	dest = (unsigned char*)dst;
	source = (unsigned char*)src;
	index = 0;
	if (dst > src)
	{
		while (len--)
			dest[len] = source[len];
	}
	else if (src > dst)
	{
		while (index < len)
		{
			dest[index] = source[index];
			index++;
		}
	}
	return (dest);
}
