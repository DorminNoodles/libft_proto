/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/06 09:14:33 by lchety            #+#    #+#             */
/*   Updated: 2016/10/06 09:14:33 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strcat(char *dest, const char *src)
{
	size_t i;

	i = 0;
	while (*(dest + ++i));
	while(*src)
	{
		*(dest + i) = *src++;
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}