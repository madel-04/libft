/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madel-va <madel-va@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:30:02 by madel-va          #+#    #+#             */
/*   Updated: 2024/09/20 12:54:14 by madel-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = ft_length(dest);
	j = 0;
	if ((size <= 0) || (!dest) || (!src))
		return (0);
	while (*dest)
		dest++;
	while (j < size - i - 1)
	{
		*dest++ = src[j];
		j++;
	}
	*dest = '\0';
	return (i);
}
