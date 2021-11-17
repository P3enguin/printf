/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 18:03:35 by ybensell          #+#    #+#             */
/*   Updated: 2021/11/16 19:04:11 by ybensell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_print_unsigned(va_list str, const char *fmt)
{
	unsigned int	x;
	char			*nb;
	int				count;

	x = va_arg(str, unsigned int);
	nb = ft_unsigned_itoa(x);
	count = ft_strlen(nb);
	ft_putstr(nb);
	free(nb);
	return (count);
}	
