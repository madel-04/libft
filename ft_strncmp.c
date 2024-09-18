/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madel-va <madel-va@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 11:52:06 by madel-va          #+#    #+#             */
/*   Updated: 2024/09/17 11:55:37 by madel-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
/*
int     main()
{
    printf("%d", ft_strncmp("Hello", "Hello1", 8));
    printf("\n%d", ft_strncmp("Hello", "He", 8));
    printf("\n%d", ft_strncmp("He", "Hello", 8));
    printf("\n%d", ft_strncmp("Hello", "Hello", 8));
}
*/
