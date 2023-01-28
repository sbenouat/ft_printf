/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenouat <sbenouat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 16:56:51 by sbenouat          #+#    #+#             */
/*   Updated: 2022/12/20 06:14:03 by sbenouat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		len_dest;
	size_t		n;
	const char	*tmp_s;
	char		*tmp_d;

	tmp_s = src;
	tmp_d = dst;
	n = size;
	while (n-- != 0 && *tmp_d != '\0')
		tmp_d++;
	len_dest = tmp_d - dst;
	n = size - len_dest;
	if (n == 0)
		return (len_dest + ft_strlen(tmp_s));
	while (*tmp_s != '\0')
	{
		if (n != 1)
		{
			*tmp_d++ = *tmp_s;
			n--;
		}
		tmp_s++;
	}
	*tmp_d = '\0';
	return (len_dest + (tmp_s - src));
}
