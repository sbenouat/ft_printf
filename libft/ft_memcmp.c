/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenouat <sbenouat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 02:08:24 by sbenouat          #+#    #+#             */
/*   Updated: 2022/11/23 02:18:21 by sbenouat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*inter_s1;
	unsigned char	*inter_s2;
	size_t			i;

	inter_s1 = (unsigned char *)s1;
	inter_s2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (inter_s1[i] != inter_s2[i])
			return (inter_s1[i] - inter_s2[i]);
		i++;
	}
	return (0);
}
