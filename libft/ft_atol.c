/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:42:01 by cllovio           #+#    #+#             */
/*   Updated: 2023/02/22 14:44:19 by cllovio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long int	check_overflow(long int nbr)
{
	if (nbr > 2147483647)
		return (2147483648);
	if (nbr < -2147483648)
		return (2147483648);
	return (nbr);
}
long int	ft_atol(char *str)
{
	int			i;
	long int	result;
	int			sign;

	i = 0;
	result = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		
		if (result != (result * 10 + (str[i] - 48)) / 10)
			return (2147483648);
		result = result * 10 + (str[i] - 48);
		i++;
	}
	return (check_overflow(result * sign));
}
