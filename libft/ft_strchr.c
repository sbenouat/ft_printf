/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenouat <sbenouat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:14:51 by sbenouat          #+#    #+#             */
/*   Updated: 2022/12/23 09:40:46 by sbenouat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*rslt;

	rslt = (char *)s;
	while (*rslt)
	{
		if (*rslt == (const char)c)
			return (rslt);
		rslt++;
	}
	if (*rslt == (const char)c)
		return (rslt);
	return (NULL);
}
