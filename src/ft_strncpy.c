/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/06 00:13:35 by lchety            #+#    #+#             */
/*   Updated: 2016/10/06 00:13:35 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char *ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t i;

	i = 0;

	while (i < n && *(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	if (i < n)
	{
		*(dest + i) = '\0';
		while (i < n)
		{
			*(dest + i) = '\0';
			i++;
		}
	}

/*
	while (i < n && *(src + i) != '\0' && *(dest + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n && *(dest + i) != '\0')
	{
		*(dest + i) = '\0';
		i++;
	}
	if(*(dest + i) != '\0')
		*(dest + i) = '\0';
*/	
	return (dest);
}