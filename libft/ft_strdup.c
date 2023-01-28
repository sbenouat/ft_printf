/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenouat <sbenouat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:50:35 by sbenouat          #+#    #+#             */
/*   Updated: 2022/12/20 07:11:53 by sbenouat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	slen;
	char	*rslt;

	rslt = (char *)malloc((ft_strlen(s) + 1) * sizeof(*s));
	if (!rslt)
		return (NULL);
	slen = 0;
	while (s[slen])
	{
		rslt[slen] = s[slen];
		slen++;
	}
	rslt[slen] = '\0';
	return (rslt);
}
