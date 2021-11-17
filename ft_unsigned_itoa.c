/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_itoa.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 18:18:17 by ybensell          #+#    #+#             */
/*   Updated: 2021/11/16 19:05:10 by ybensell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	size(unsigned int nb)
{
	unsigned int	i;

	i = 0;
	if (nb == 0)
	{
		i++;
		return (i);
	}
	while (nb > 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

char	*ft_unsigned_itoa(int n)
{
	char			*p;
	unsigned int	s;
	unsigned int	nb;

	nb = n;
	s = size(nb);
	p = malloc(sizeof(char) * (s + 1));
	if (p == 0)
		return (NULL);
	*(p + s) = '\0';
	if (nb == 0)
		*(p + 0) = '0';
	while (nb > 0)
	{
		*(p + s - 1) = (nb % 10) + 48;
		nb = nb / 10;
		s--;
	}
	return (p);
}
