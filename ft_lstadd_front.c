/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 19:49:21 by marvin            #+#    #+#             */
/*   Updated: 2024/09/22 19:49:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Añade el nodo new al principio de la lista lst*/
void ft_lstadd_front(t_list **lst, t_list *new)
{
    if (new)
    {
    new->next = *lst;
    *lst = new;
    }
}