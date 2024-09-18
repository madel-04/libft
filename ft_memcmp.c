/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madel-va <madel-va@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:11:00 by madel-va          #+#    #+#             */
/*   Updated: 2024/09/17 13:18:24 by madel-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((i < n) &&
		(*((unsigned char *)s1 + i) == *((unsigned char *)s2 + i)))
		i++;
	return (*((unsigned char *)s1 + i) - *((unsigned char *)s2 + i));
}
