/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madel-va <madel-va@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:33:34 by madel-va          #+#    #+#             */
/*   Updated: 2024/09/17 13:45:09 by madel-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	if (dest == src || !size)
		return (dest);
	i = 0;
	while (i < n)
	{
		(*(char )dest + i) = (*(char )src + i);
		i++;
	}
	return (i);
}
