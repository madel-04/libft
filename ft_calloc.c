/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madel-va <madel-va@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:01:03 by madel-va          #+#    #+#             */
/*   Updated: 2024/09/20 11:05:39 by madel-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_calloc(size_t nmemb, size_t size)
{
	void	*buffer;

	if (nmemb == 0 || size == 0/* || nmemb > SIZE_MAX / size (Para eviar un overflow)*/)
		return NULL;
	buffer = (char *)malloc(nmemb * size);
	if (!buffer)
		return NULL;
	ft_bzero(buffer, size * nmemb);
	return (buffer);
}
/*SIZE_MAX s el valor max que puede almacenar un size_t, para
comprobar que nmemb * size no lo supera*/