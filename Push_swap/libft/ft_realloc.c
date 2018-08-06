/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshirley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 13:42:42 by cshirley          #+#    #+#             */
/*   Updated: 2018/07/10 14:04:41 by cshirley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *ptr)
{
	void	*tmp;
	size_t	size;

	size = 2 * sizeof(void*);
	if (ptr == NULL)
	{
		tmp = malloc(size);
		return (tmp);
	}
	size = 2 * sizeof(ptr);
	free(&ptr);
	ptr = malloc(size);
	return (ptr);
}
