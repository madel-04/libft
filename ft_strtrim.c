/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madel-va <madel-va@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:23:57 by marvin            #+#    #+#             */
/*   Updated: 2024/09/23 13:32:55 by madel-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Elimina todos los caracteres de la string set desde el principio y
dsde el final de s1 hasta encontrar un caracter no perteneciente
aset y devuelve la string resultante: NULL reserva de memoria*/
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	j;

	if (!s1 || !set)
		return (NULL);
	while (*s1 != '\0' && ft_strchr(set, *s1))
		s1++;
	j = ft_strlen((char *)s1);
	while (ft_strchr(set, s1[j]) && j != 0)
		j--;
	return (ft_substr((char *)s1, 0, j + 1));
}
/*Primer while: return a pointer to the byte,
		locate the first occurrence of c*/
