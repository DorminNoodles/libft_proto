/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/06 22:55:04 by lchety            #+#    #+#             */
/*   Updated: 2016/11/24 19:07:16 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;

	i = 0;
	if(ft_strcmp(needle, "") == 0)
		return ((char *	)haystack);
	while (*haystack && len != 0)
	{
		if (*haystack == needle[i])
		{
			i++;
			if (i == (int)ft_strlen(needle))
				return ((char *)haystack - (i - 1));
		}
		else
			i = 0;
		len--;
		haystack++;		
	}
	return (NULL);
}