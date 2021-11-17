/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 16:01:02 by ybensell          #+#    #+#             */
/*   Updated: 2021/11/16 19:18:47 by ybensell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_print_str(va_list str, const char *fmt)
{
	char	*s;
	int		i;

	s = va_arg(str, char *);
	if (s != NULL)
	{
		i = ft_strlen(s);
		ft_putstr(s);
	}
	if (s == NULL)
	{
		write(1, "(null)", 6);
		i = 6;
		return (i);
	}
	return (i);
}
