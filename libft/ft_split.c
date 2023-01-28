/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenouat <sbenouat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:43:31 by sbenouat          #+#    #+#             */
/*   Updated: 2022/12/21 09:23:32 by sbenouat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwords(char const *s, char c)
{
	int	rslt;
	int	i;

	rslt = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		rslt++;
		while (s[i] != c && s[i])
			i++;
		while (s[i] == c && s[i])
			i++;
	}
	return (rslt);
}

static char	*ft_inter(char const *s, char c)
{
	char	*rslt;
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	rslt = (char *)malloc((i + 1) * sizeof(char));
	if (!rslt)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
	{
		rslt[i] = s[i];
		i++;
	}
	rslt[i] = '\0';
	return (rslt);
}

char	**ft_split(char const *s, char c)
{
	char	**rslt;
	int		i;

	if (!s)
		return (NULL);
	rslt = (char **)malloc((ft_countwords(s, c) + 1) * sizeof(char *));
	if (!rslt)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s != c && *s)
		{
			rslt[i] = ft_inter(s, c);
			i++;
			while (*s != c && *s)
				s++;
		}
		while (*s == c && *s)
			s++;
	}
	rslt[i] = NULL;
	return (rslt);
}
