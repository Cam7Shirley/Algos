/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshirley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 08:59:52 by cshirley          #+#    #+#             */
/*   Updated: 2018/06/11 06:22:06 by cshirley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*ptr;
	t_list	*head;
	t_list	*new;

	ptr = NULL;
	if (lst == NULL)
		return (NULL);
	if (lst != NULL)
	{
		if ((ptr = f(lst)) == NULL)
			return (NULL);
	}
	new = ptr;
	head = new;
	while (lst != NULL)
	{
		if (lst->next == NULL)
			break ;
		lst = lst->next;
		if ((ptr = f(lst)) == NULL)
			break ;
		new->next = ptr;
		new = new->next;
	}
	return (head);
}
