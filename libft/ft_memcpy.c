/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenouat <sbenouat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 00:37:28 by sbenouat          #+#    #+#             */
/*   Updated: 2022/12/20 07:07:09 by sbenouat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*inter_dst;
	const char	*inter_src;
	size_t		i;

	inter_dst = dst;
	inter_src = src;
	i = 0;
	if (inter_dst != NULL || inter_src != NULL)
	{
		while (i < n)
		{
			inter_dst[i] = (char)inter_src[i];
			i++;
		}
	}
	return (dst);
}
