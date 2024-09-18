/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madel-va <madel-va@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:01:03 by madel-va          #+#    #+#             */
/*   Updated: 2024/09/18 13:50:48 by madel-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_calloc(size_t nmemb, size_t size)
{
	void	*buffer;

	if (nmemb == 0)
		return NULL;
	buffer = (char *)malloc(nmemb * size);
	if (!buffer)
		return NULL;
	buffer = ft_bzero(buffer, size * nmemb);
	return (buffer);
}
