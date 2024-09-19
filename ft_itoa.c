/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:35:05 by marvin            #+#    #+#             */
/*   Updated: 2024/09/19 15:35:05 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Usa malloc y genera una string que represente el valor 
entero recibido como argumento. Gestiona NEGAATIVOS*/
static int	ft_num_len(int n) /*Static para qie solo sea visible para el archivo donde se define*/
{
	int	len;

	len = 1; /*Posible numero negativo*/
	if (n < 0)
		len++;
	while (n / 10 != 0) /*600 / 10 = 60 / 10 = 6*/
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int	len;
	long	nb;

	nb = n; /*para gestionar los valores mejor*/
	len = ft_num_len(nb);
	str = (char *)malloc(sizeof(char) * (len +1));
	if (!str)
		return (NULL);
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	while (nb > 9)
	{
		str[--len] = (nb % 10) + '0';
		nb /= 10;
	}
	str[--len] = nb + '0';
	return (str);
}
/*La diferencia entre poner --len y len-- es que en la primera
decrementa el valor antes de usar la variable y en la segunda
usa el valor de la variable y luego lo decrementa*/