/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenouat <sbenouat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 23:52:42 by sbenouat          #+#    #+#             */
/*   Updated: 2022/12/23 09:54:33 by sbenouat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	len;
	void	*rslt;

	if (!size || !count || (count > SIZE_MAX / size))
		len = 1;
	else
		len = count * size;
	if (size >= SIZE_MAX || count >= SIZE_MAX || size * count >= SIZE_MAX)
		return (NULL);
	rslt = (void *)malloc(len);
	if (!rslt)
		return (NULL);
	ft_bzero(rslt, len);
	return (rslt);
}
