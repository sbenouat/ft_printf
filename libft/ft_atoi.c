/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenouat <sbenouat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:28:19 by sbenouat          #+#    #+#             */
/*   Updated: 2022/12/23 09:11:05 by sbenouat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nbr)
{
	int	sign;
	int	rslt;

	rslt = 0;
	sign = 1;
	while ((*nbr > 8 && *nbr < 14) || *nbr == 32)
		nbr++;
	if (*nbr == '-' || *nbr == '+')
	{
		if (*nbr == '-')
			sign = -1;
		nbr++;
	}
	while (ft_isdigit(*nbr) == 1)
	{
		rslt = (rslt * 10) + (*nbr - 48);
		nbr++;
	}
	return (rslt * sign);
}
