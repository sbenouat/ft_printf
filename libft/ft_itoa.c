/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenouat <sbenouat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 11:53:02 by sbenouat          #+#    #+#             */
/*   Updated: 2022/12/23 10:05:05 by sbenouat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_sizenb(int n)
{
	size_t	i;

	i = 0;
	if (n <= 0)
	{
		i++;
		n = -n;
	}
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		sign;
	size_t	len;
	size_t	i;

	sign = 1;
	len = ft_sizenb(n);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n < 0)
		str[0] = '-';
	i = 0;
	while (n || !i)
	{
		if (n < 0)
			sign = -1;
		str[len - 1 - i++] = '0' + sign * (n % 10);
		n /= 10;
	}
	return (str);
}
