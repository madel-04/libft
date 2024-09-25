/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madel-va <madel-va@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 10:54:40 by madel-va          #+#    #+#             */
/*   Updated: 2024/09/25 11:14:01 by madel-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;
	t_list	*new_node;
	void	*i;

	if (!lst || !f || !del)
		return (NULL);
	list = NULL;
	while (lst)
	{
		i = f(lst->content);
		new_node = ft_lstnew(i);
		if (!new_node)
		{
			del(i);
			ft_lstclear(&list, del);
			return (list);
		}
		ft_lstadd_back(&list, new_node);
		lst = lst->next;
	}
	return (list);
}
/*Iterla l lisa y aplica la función al contenido de cada nodo, y se crea 
uan lista resultante cuando se aplica correctamente, sino se vacía con el del*/
