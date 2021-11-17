/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 10:56:26 by ybensell          #+#    #+#             */
/*   Updated: 2021/11/17 07:12:05 by ybensell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_print(va_list str, const char *fmt)
{	
	int	count;

	count = 0;
	if (*fmt == 'c')
		count = ft_print_char(str, fmt);
	if (*fmt == 's')
		count = ft_print_str(str, fmt);
	if (*fmt == 'd' || *fmt == 'i')
		count = ft_print_int(str, fmt);
	if (*fmt == 'u')
		count = ft_print_unsigned(str, fmt);
	if (*fmt == 'X' || *fmt == 'x')
		count = ft_print_hex(str, fmt);
	if (*fmt == 'p')
		count = ft_print_ptr(str, fmt);
	if (*fmt == '%')
	{
		write(1, "%", 1);
		count++;
	}	
	return (count);
}
