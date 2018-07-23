/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshirley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 06:42:37 by cshirley          #+#    #+#             */
/*   Updated: 2018/05/24 07:10:47 by cshirley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	index;
	char	*dest;
	char	*source;

	dest = (char*)dst;
	source = (char*)src;
	index = 0;
	while (index < n)
	{
		dest[index] = source[index];
		index++;
	}
	return ((void*)dest);
}
