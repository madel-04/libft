/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madel-va <madel-va@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:48:37 by madel-va          #+#    #+#             */
/*   Updated: 2024/09/23 15:48:37 by madel-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		position;

	if (*little == '\0')
		return ((char *)big);
	position = ft_strlen((char *)little);
	while (*big != '\0' && len >= position)
	{
		if (*big == *little && ft_memcmp(big, little, position) == 0)
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}
