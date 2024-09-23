/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madel-va <madel-va@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:48:28 by madel-va          #+#    #+#             */
/*   Updated: 2024/09/23 15:48:28 by madel-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Puntero a una función que retorna un char y que de parametros
tiene un unsigned int y char*/
/*Evitar desbordamientos usamos size_t*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*dest;
	size_t	i;
	size_t	len;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (s[i])
	{
		dest[i] = f(i, s[i]);
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
