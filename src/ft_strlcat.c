/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/06 11:25:41 by lchety            #+#    #+#             */
/*   Updated: 2016/10/06 11:25:41 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;

	i = 0;
	while (*dst)
	{
		dst++;
		i++;
	}
	while (*src)
	{
		if(i < size - 1)
		{
			*dst = *src;
			dst++;
		}
		src++;
		i++;
	}
	*dst = '\0';
	return (i);
}