/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/08 11:03:04 by lchety            #+#    #+#             */
/*   Updated: 2016/11/26 15:52:04 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char			*str;
	unsigned int	go;
	size_t			i;

	i = 0;
	go = 0;
	while (s[go] == ' ' || s[go] == '\n' || s[go] == '\t')
		go++;
	while (s[go + i++]);
	while (s[go + i] == ' ' || s[go + i] == '\n' || 
		s[go + i] == '\t' || s[go + i] == '\0')
	{
		i--;
	}
	str = ft_strsub(s, go, i + 1);
	if (str == NULL)
		return (NULL);
	return (str);
}
