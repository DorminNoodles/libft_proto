/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/05 08:39:43 by lchety            #+#    #+#             */
/*   Updated: 2016/10/05 08:39:43 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *nptr)
{
	int i;
	int sign;
	int x;
	int value;
	
	i = 0;
	sign = 1;
	x = 1;
	value = 0;

	while (nptr[i] == ' ' || nptr[i] == '\v' || nptr[i] == '\t' 
	|| nptr[i] == '\f' || nptr[i] == '\n' || nptr[i] == '\r')
		i++;

	if (nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if(nptr[i] == '+')
	{
		sign = -1;
		i++;
	}

	while(nptr[i] >= '0' && nptr[i] <= '9')
	{
		value = (value * x) + (nptr[i] - '0');
		x = 10;
		i++;
	}

	return (value * sign);
}