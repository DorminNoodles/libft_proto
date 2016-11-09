/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/05 18:00:55 by lchety            #+#    #+#             */
/*   Updated: 2016/10/05 18:00:55 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i;
	char *src_temp;

	i = 0;

	src_temp = (char *)ft_memalloc(n);
	ft_memcpy((void *)src_temp, src, ft_strlen(src));

	while (i < n)
	{
		*(char *)(dest + i) = *(src_temp + i);
		i++;
	}
	return(dest);
}