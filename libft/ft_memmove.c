/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenouat <sbenouat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 00:53:10 by sbenouat          #+#    #+#             */
/*   Updated: 2022/12/23 09:36:10 by sbenouat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	i;

	if (dst <= src)
		return (ft_memcpy(dst, src, len));
	i = len;
	while (--i >= 0)
		((char *)dst)[i] = ((char *)src)[i];
	return (dst);
}
