/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshirley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 15:45:03 by cshirley          #+#    #+#             */
/*   Updated: 2018/05/29 07:48:03 by cshirley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_match(const char *haystack, const char *needle)
{
	size_t	index;

	index = 0;
	while (needle[index] != '\0')
	{
		if (needle[index] != haystack[index])
			return (0);
		index++;
	}
	return (1);
}

char		*ft_strstr(const char *h, const char *n)
{
	size_t	index;

	index = 0;
	if (n[0] == '\0')
		return ((char*)h);
	while (h[index] != '\0')
	{
		if (h[index] == n[0])
		{
			if (ft_match(&h[index], n) == 1)
				return ((char*)&h[index]);
		}
		index++;
	}
	return (NULL);
}
