/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 19:28:18 by marvin            #+#    #+#             */
/*   Updated: 2024/09/17 19:28:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t  position;

	if(*big == '\0')
		return ((char *)big);
	position = ft_strlen((char *)little);
	while (*big != '\0' && len-- >= position)
	{
		if(*big == *little && ft_memcmp(big, little, position) == 0)
			return ((char *)big);
		big++;
	}
	return NULL;
}