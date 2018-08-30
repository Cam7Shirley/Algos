/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshirley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 09:22:32 by cshirley          #+#    #+#             */
/*   Updated: 2018/05/28 15:04:12 by cshirley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	index;
	size_t	destlen;
	size_t	srclen;

	srclen = 0;
	destlen = 0;
	index = 0;
	while (src[srclen] != '\0')
		srclen++;
	while (dst[destlen] != '\0')
		destlen++;
	if (dstsize <= destlen)
		return (srclen + dstsize);
	while (dst[index] != '\0' && index < (dstsize - 1))
		index++;
	while (*src && index < (dstsize - 1))
	{
		dst[index] = *src;
		index++;
		src++;
	}
	dst[index] = '\0';
	return (destlen + srclen);
}
