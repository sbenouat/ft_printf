/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenouat <sbenouat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 02:16:32 by sbenouat          #+#    #+#             */
/*   Updated: 2023/01/28 09:28:19 by sbenouat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_point(unsigned long int n)
{
	unsigned int	cpt;

	cpt = 1;
	if (n >= 16)
		cpt = cpt + ft_point(n / 16);
	ft_putchar("0123456789abcdef"[n % 16]);
	return (cpt);
}

static int	ft_args(char c, va_list args)
{
	unsigned long int	p;

	if (c == '%')
		return (ft_putchar('%'));
	else if (c == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (c == 'i' || c == 'd')
		return (ft_putnbr(va_arg(args, int)));
	else if (c == 'u')
		return (ft_putnbr_unsigned(va_arg(args, unsigned int)));
	else if (c == 'x' || c == 'X')
		return (ft_hexa(c, va_arg(args, unsigned int)));
	else if (c == 'p')
	{
		p = va_arg(args, unsigned long int);
		if (p == 0)
			return (ft_putstr("(nil)"));
		ft_putstr("0x");
		return (ft_point(p) + 2);
	}
	else
		return (-1);
}

int	ft_printf(char const *s, ...)
{
	unsigned int	i;
	int				cpt;
	va_list			args;

	if (!s)
		return (-1);
	i = 0;
	cpt = 0;
	va_start(args, s);
	while (s[i] != '\0')
	{
		if (s[i] != '%')
		{
			cpt = cpt + ft_putchar(s[i]);
			i++;
		}
		else
		{
			cpt = cpt + ft_args(s[i + 1], args);
			i = i + 2;
		}
	}
	va_end(args);
	return (cpt);
}
