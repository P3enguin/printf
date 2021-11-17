/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 08:36:33 by ybensell          #+#    #+#             */
/*   Updated: 2021/11/17 07:15:53 by ybensell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static void	ft_reverse_tab(char *str)
{
	char	tmp;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(str) - 1;
	while (i < len)
	{
		tmp = *(str + i);
		*(str + i) = *(str + len);
		*(str + len) = tmp;
		i++;
		len--;
	}
}

static int	ft_len(unsigned	int nbr)
{
	int	i;

	i = 0;
	while (nbr > 0)
	{
		nbr = nbr / 16;
		i++;
	}
	return (i);
}

static char	*ft_convert_hex(char *str, unsigned int nbr)
{
	int	i;
	int	temp;

	i = 0;
	while (nbr > 0)
	{
		temp = nbr % 16;
		if (temp < 10)
		{
			*(str + i) = (temp + 48);
			i++;
		}
		else
		{
			*(str + i) = (temp + 55);
			i++;
		}
		nbr = nbr / 16;
	}
	*(str + i) = '\0';
	return (str);
}

static char	*ft_get_hex(va_list str)
{
	unsigned int	nbr;
	int				size;
	char			*hex;

	nbr = va_arg(str, unsigned int);
	size = ft_len(nbr);
	hex = malloc(sizeof(char) * (size + 1));
	if (!hex)
		return (NULL);
	if (nbr == 0)
	{
		*(hex + 0) = '0';
		*(hex + 1) = '\0';
		return (hex);
	}
	ft_convert_hex(hex, nbr);
	return (hex);
}

int	ft_print_hex(va_list str, const char *fmt)
{
	char	*ptr;
	int		i;
	int		count;

	i = 0;
	ptr = ft_get_hex(str);
	ft_reverse_tab(ptr);
	if (*fmt == 'x')
	{
		while (*(ptr + i) != '\0')
		{
			*(ptr + i) = ft_tolower(*(ptr + i));
			i++;
		}
	}
	ft_putstr(ptr);
	count = ft_strlen(ptr);
	free (ptr);
	return (count);
}
