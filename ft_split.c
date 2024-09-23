/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madel-va <madel-va@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:23:41 by marvin            #+#    #+#             */
/*   Updated: 2024/09/23 12:51:08 by madel-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Reserva un array de strings destante de separar la string s en un substring
usando el caracter c como delimitador
EL ARRAY ACABA CON UN PUNTERO NULL*/
static size_t	ft_word_count(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (count);
}

static char	**ft_free_split(char **dest, int i)
{
	while (i > 0)
		free(dest[--i]);
	free(dest);
	return (NULL);
}

static char	**ft_split2(char **dest, char const *s, int i, char c)
{
	int			len;
	const char	*start;

	while (*s)
	{
		if (*s != c)
		{
			start = s;
			len = 0;
			while (*s && *s != c)
			{
				len++;
				s++;
			}
			dest[i] = ft_substr(start, 0, len);
			if (!dest[i])
				return (ft_free_split(dest, i));
			i++;
		}
		else
			s++;
	}
	dest[i] = NULL;
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	char	**dest;
	int		i;

	if (!s)
		return (NULL);
	dest = (char **)malloc((ft_word_count(s, c) + 1) * sizeof(char *));
	if (!dest)
		return (NULL);
	i = 0;
	return (ft_split2(dest, s, i, c));
}
/*Representacion de un array de strings:
char			*array[] = {
	"Hello",
	"World",
	"Array",
	"Of",
	"Strings"
};

array[0] --> "Hello"
array[1] --> "World"
array[2] --> "Array"
array[3] --> "Of"
array[4] --> "Strings"
*/