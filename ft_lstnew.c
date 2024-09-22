/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 19:45:21 by marvin            #+#    #+#             */
/*   Updated: 2024/09/22 19:45:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Crear un nuevo nodo y la variable miembreo content contiene contetn y next, NULL*/
t_list *ft_lstnew(void *content)
{
    t_list  *node;

    node = (t_list *)malloc(sizeof(t_list));
    if(!node)
        return (NULL);
    node->content = content;
    node->next = NULL;
    return (node);
}