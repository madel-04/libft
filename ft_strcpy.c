/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madel-va <madel-va@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:33:34 by madel-va          #+#    #+#             */
/*   Updated: 2024/09/18 13:16:36 by madel-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	if (dest == src || !size)
		return (dest);
	i = 0;
	while (i < size)
	{
		(*(char )dest + i) = (*(char )src + i);
		i++;
	}
	return (i);
}
