/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshirley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 15:07:13 by cshirley          #+#    #+#             */
/*   Updated: 2018/06/30 15:07:15 by cshirley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *str1, char const *str2)
{
	char *ret;

	if (!str1 || !str2)
		return (NULL);
	ret = ft_strnew(ft_strlen((char *)str1) + ft_strlen((char *)str2));
	if (!ret)
		return (NULL);
	ret = ft_strcpy(ret, str1);
	ret = ft_strcat(ret, str2);
	return (ret);
}
