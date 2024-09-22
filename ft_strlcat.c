/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:35:19 by madel-va          #+#    #+#             */
/*   Updated: 2024/09/22 14:56:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = ft_length(dest);
	if (size <= i)
		return (0);
	j = 0;
	while (*dest)
		dest++;
	while (j < size - i - 1)
	{
		*dest++ = src[j];
		j++;
	}
	*dest = '\0';
	return (ft_length(dest));
}
