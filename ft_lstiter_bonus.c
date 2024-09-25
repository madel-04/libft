/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madel-va <madel-va@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 10:54:04 by madel-va          #+#    #+#             */
/*   Updated: 2024/09/25 10:54:05 by madel-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*pos;

	if (!lst)
		return ;
	while (pos != NULL)
	{
		(*f)(pos->content);
		pos = pos->next;
	}
}
/*Itera la lista lst y aplica la funcoin en el contenido de cada
uno de los nodos*/
