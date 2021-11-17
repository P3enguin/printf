/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 12:52:44 by ybensell          #+#    #+#             */
/*   Updated: 2021/11/17 07:38:25 by ybensell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_printf(const char *fmt, ...)
{
	int		count;
	va_list	s;

	count = 0;
	va_start(s, fmt);
	while (*fmt != '\0')
	{
		if (*fmt == '%')
		{
			count = count + ft_print(s, fmt + 1);
			fmt++;
		}
		else
		{
			ft_putchar(*fmt);
			count++;
		}	
		fmt++;
	}
	va_end(s);
	return (count);
}
