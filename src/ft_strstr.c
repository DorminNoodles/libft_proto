/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/06 16:43:35 by lchety            #+#    #+#             */
/*   Updated: 2016/10/06 16:43:35 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strstr(const char *haystack, const char *needle)
{
	size_t i;

	i = 0;
	while (*haystack)
	{
		if (needle[i] == '\0')
			return ((char *)haystack - ft_strlen(needle));
		if (*haystack != needle[i])
			i = 0;
		else
			i++;
		haystack++;
	}
	return (NULL);
}