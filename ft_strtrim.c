/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:23:57 by marvin            #+#    #+#             */
/*   Updated: 2024/09/22 15:45:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Elimina todos los caracteres de la string set desde el principio y dsde el final
de s1 hasta encontrar un caracter no perteneciente aset y devuelve
la string resultante: NULL reserva de memoria*/
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t i;
	size_t j;
	char *str;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	j = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i])) /*return a pointer to the byte,
		locate the first occurrence of c*/
		i++;
	while (ft_strchr(set, s1[j - 1]) && j > i)
		j--;
	str = (char *)malloc(sizeof(char) * (j - i + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, &s1[i], j - i + 1);
	return (str);
}