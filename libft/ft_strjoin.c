/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenouat <sbenouat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 00:03:01 by sbenouat          #+#    #+#             */
/*   Updated: 2022/12/21 09:31:27 by sbenouat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	size_t	i;
	char	*rslt;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	rslt = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (!rslt)
		return (NULL);
	while (i < len1 + len2)
	{
		if (i < len1)
			rslt[i] = s1[i];
		else
			rslt[i] = s2[i - len1];
		i++;
	}
	rslt[i] = '\0';
	return (rslt);
}
