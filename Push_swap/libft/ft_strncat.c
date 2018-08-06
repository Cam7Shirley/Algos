/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshirley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 09:04:31 by cshirley          #+#    #+#             */
/*   Updated: 2018/05/28 14:45:52 by cshirley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	index1;
	size_t	index2;

	index1 = ft_strlen(s1);
	index2 = 0;
	while (s2[index2] != '\0' && index2 < n)
	{
		s1[index1 + index2] = s2[index2];
		index2++;
	}
	s1[index1 + index2] = '\0';
	return (s1);
}
