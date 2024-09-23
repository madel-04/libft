/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madel-va <madel-va@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:35:19 by madel-va          #+#    #+#             */
/*   Updated: 2024/09/23 14:59:51 by madel-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = ft_strlen(dest);
	j = ft_strlen(src);
	if (size <= i)
		return (size + j);
	k = 0;
	while (src[k] != '\0' && (i + k) < size - 1)
	{
		dest[i + k] = src[k];
		k++;
	}
	dest[i + k] = '\0';
	return (i + j);
}
