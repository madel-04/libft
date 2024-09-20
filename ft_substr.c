/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:17:42 by marvin            #+#    #+#             */
/*   Updated: 2024/09/18 15:17:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Reserva con maloc(3) y devuelve una substring de la string s*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t	i;
	char	*dest;

	i = 0;
	dest = (char *)malloc(ft_strlen(s) * sizeof(char));
    if (!dest)
        return (NULL);
    while (i < len)
	{
		dest[i] = s[start];
		start++;
		i++;
	}
	return (dest);
}