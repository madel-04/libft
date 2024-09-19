/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:11:00 by madel-va          #+#    #+#             */
/*   Updated: 2024/09/19 15:25:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((i < n) &&
		(*((unsigned char *)s1 + i) == *((unsigned char *)s2 + i)))
		i++;
	return (*((unsigned char *)s1 + i) - *((unsigned char *)s2 + i));
}