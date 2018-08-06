/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshirley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 15:07:33 by cshirley          #+#    #+#             */
/*   Updated: 2018/06/30 15:07:34 by cshirley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char *dup;

	dup = (char*)malloc(1 + ft_strlen((str)));
	if (!dup)
		return (NULL);
	dup = ft_strcpy(dup, (char*)str);
	return (dup);
}
