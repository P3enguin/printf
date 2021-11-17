/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 10:22:22 by ybensell          #+#    #+#             */
/*   Updated: 2021/11/16 18:22:44 by ybensell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	size(long int nb)
{
	int	i;

	i = 0;
	if (nb == 0)
	{
		i++;
		return (i);
	}
	if (nb < 0)
	{
		i++;
		nb = -nb;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}	

char	*ft_itoa(int n)
{
	char		*p;
	int			s;
	long int	nb;

	nb = n;
	s = size(nb);
	p = (char *)malloc(sizeof(char) * (s + 1));
	if (p == 0)
		return (NULL);
	*(p + s) = '\0';
	if (nb == 0)
		*(p + 0) = '0';
	if (nb < 0)
	{
		*(p + 0) = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		*(p + s - 1) = (nb % 10) + 48;
		nb = nb / 10;
		s--;
	}
	return (p);
}
