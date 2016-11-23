/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/06 11:25:41 by lchety            #+#    #+#             */
/*   Updated: 2016/11/23 12:20:36 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;

	i = strlen(dst);
	dst += i;
	while (i < size && *src != '\0')
	{
		*(dst++) = *src;
		src++;
		i++;
	}
	*dst  = '\0';

		return (i);
}
