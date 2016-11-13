/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/06 09:31:15 by lchety            #+#    #+#             */
/*   Updated: 2016/11/13 16:48:46 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t i;

	i = 0;
	while (*(dest + i))
		i++;
	n += i;
	while (*(src) && i < n)
	{
		*(dest + i) = *src++;
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
