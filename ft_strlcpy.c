/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:30:02 by madel-va          #+#    #+#             */
/*   Updated: 2024/09/22 17:15:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(dest);
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
