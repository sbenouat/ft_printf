/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenouat <sbenouat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 12:31:22 by sbenouat          #+#    #+#             */
/*   Updated: 2022/12/21 09:22:48 by sbenouat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, const char))
{
	char	*rslt;
	size_t	i;

	if (!f || !s)
		return (NULL);
	rslt = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!rslt)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s))
	{
		rslt[i] = (*f)(i, s[i]);
		i++;
	}
	rslt[i] = '\0';
	return (rslt);
}
