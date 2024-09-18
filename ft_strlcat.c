/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madel-va <madel-va@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:35:19 by madel-va          #+#    #+#             */
/*   Updated: 2024/09/18 13:17:12 by madel-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = ft_length(dest);
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
