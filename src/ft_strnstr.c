/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/06 22:55:04 by lchety            #+#    #+#             */
/*   Updated: 2016/10/06 22:55:04 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;

	i = 0;
	while (*haystack && len > 0)
	{
		if (needle[i] == '\0')
			return ((char *)haystack - ft_strlen(needle));
		if (*haystack != needle[i])
			i = 0;
		else
			i++;
		haystack++;
		len--;
	}
	return (NULL);
}