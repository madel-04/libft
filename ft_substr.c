/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2024/09/18 15:17:42 by marvin            #+#    #+#             */
/*   Updated: 2024/09/18 15:17:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


/* Reserva con maloc(3) y devuelve una substring de la string s*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i;
	char *dest;

	if (!s)
		return (NULL);
	i = 0;
	if (start >= ft_strlen(s))
		return((char *)calloc(1, sizeof(char)));
	if ((start + len) > ft_strlen(s))
		len = ft_strlen(s) - start;
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