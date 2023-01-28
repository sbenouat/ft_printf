/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenouat <sbenouat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 00:26:48 by sbenouat          #+#    #+#             */
/*   Updated: 2022/12/23 09:22:06 by sbenouat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*rslt;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	while (((start + j) < ft_strlen(s)) && (j < len))
		j++;
	rslt = (char *)malloc((j + 1) * sizeof(char));
	if (!rslt)
		return (NULL);
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			rslt[j] = s[i];
			j++;
		}
		i++;
	}
	rslt[j] = '\0';
	return (rslt);
}
