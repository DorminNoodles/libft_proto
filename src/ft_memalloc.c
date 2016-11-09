/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/04 00:46:52 by lchety            #+#    #+#             */
/*   Updated: 2016/10/04 00:46:52 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memalloc(size_t size)
{
	size_t i;
	char *ptr;

	i = 0;
	ptr = (char *)malloc(size);
	if (ptr == NULL)
		return (NULL);
	while (i < size)
	{
		*(ptr + i) = 0;
		i++;
	}
	
	return ((void *)ptr);
}