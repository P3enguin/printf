/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 12:49:30 by ybensell          #+#    #+#             */
/*   Updated: 2021/11/17 07:12:40 by ybensell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include<stdio.h>
# include<unistd.h>
# include<stdarg.h>
# include<stdlib.h>

int		ft_printf(const char *fmt, ...);
int		ft_is_conversion(const char *fmt);
int		ft_print(va_list str, const char *fmt);
void	ft_putstr(char *s);
int		ft_print_char(va_list str, const char *fmt);
void	ft_putchar(char c);
int		ft_print_str(va_list str, const char *fmt);
int		ft_print_int(va_list str, const char	*fmt);
int		ft_print_unsigned(va_list str, const char *fmt);
char	*ft_unsigned_itoa(int n);
int		ft_print_hex(va_list str, const char *fmt);
int		ft_print_ptr(va_list str, const char *fmt);
char	*ft_strjoin(char const *s1, char const *s2);
int		ft_isdigit(int c);
char	*ft_itoa(int n);
char	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlen(const char *s);
int		ft_tolower(int c);
#endif
