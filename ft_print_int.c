/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 13:07:37 by ybensell          #+#    #+#             */
/*   Updated: 2021/11/16 19:07:31 by ybensell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_print_int(va_list str, const char	*fmt)
{
	int		nbr;
	char	*nb;
	int		count;

	nbr = va_arg(str, int);
	nb = ft_itoa(nbr);
	count = ft_strlen(nb);
	ft_putstr(nb);
	free(nb);
	return (count);
}
