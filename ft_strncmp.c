/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 11:52:06 by madel-va          #+#    #+#             */
/*   Updated: 2024/09/22 15:00:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' && s2[i] != '\0') && i < n && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	printf("%d", ft_strncmp("Hello", "Hello1", 8));
	printf("\n%d", ft_strncmp("Hello", "He", 8));
	printf("\n%d", ft_strncmp("He", "Hello", 8));
	printf("\n%d", ft_strncmp("Hello", "Hello", 8));
}
*/
