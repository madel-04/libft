/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madel-va <madel-va@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:49:04 by madel-va          #+#    #+#             */
/*   Updated: 2024/09/23 15:49:04 by madel-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Reserva con maloc(3) y devuelve una substring de la string s*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	char			*dest;
	size_t			s_len;

	if (!s)
		return (NULL);
	i = 0;
	s_len = ft_strlen(s);
	if (start >= s_len)
		return ((char *)ft_calloc(1, sizeof(char)));
	if ((start + len) > s_len)
		len = s_len - start;
	dest = (char *)malloc((len + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	while (i < len && s[start + i])
	{
		dest[i] = s[start + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
