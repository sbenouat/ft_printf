/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenouat <sbenouat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 02:29:48 by sbenouat          #+#    #+#             */
/*   Updated: 2023/01/28 09:27:55 by sbenouat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	unsigned int	cpt;
	unsigned int	i;

	i = 0;
	cpt = 0;
	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (str[i] != '\0')
	{
		cpt = cpt + ft_putchar(str[i]);
		i++;
	}
	return (cpt);
}

int	ft_putnbr(int n)
{
	unsigned int	num;
	unsigned int	cpt;

	num = 0;
	cpt = 1;
	if (n < 0)
	{
		num = n * -1;
		ft_putchar('-');
		cpt++;
	}
	else
		num = n;
	if (num > 9)
		cpt = cpt + ft_putnbr(num / 10);
	ft_putchar((num % 10) + '0');
	return (cpt);
}

int	ft_putnbr_unsigned(unsigned int n)
{
	unsigned int	cpt;

	cpt = 1;
	if (n > 9)
		cpt = cpt + ft_putnbr_unsigned(n / 10);
	ft_putchar((n % 10) + '0');
	return (cpt);
}

int	ft_hexa(char c, unsigned int n)
{
	unsigned int	cpt;

	cpt = 1;
	if (c == 'x')
	{
		if (n >= 16)
			cpt = cpt + ft_hexa(c, n / 16);
		ft_putchar("0123456789abcdef"[n % 16]);
	}
	else if (c == 'X')
	{
		if (n >= 16)
			cpt = cpt + ft_hexa(c, n / 16);
		ft_putchar("0123456789ABCDEF"[n % 16]);
	}
	return (cpt);
}
