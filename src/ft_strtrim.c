/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/08 11:03:04 by lchety            #+#    #+#             */
/*   Updated: 2016/10/08 11:03:04 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s)
{
	char *str;
	unsigned int start;
	size_t i;
	
	i = 0;
	start =0;
	while (s[start] == ' ' || s[start] == '\n' || s[start] == '\t')
		start++;
	while (s[start + i++]);
	while (s[start + i] == ' ' || s[start + i] == '\n' || s[start + i] == '\t' || s[start + i] == '\0')
		i--;
	str = ft_strsub(s, start, i + 1);
	if (str == NULL)
		return (NULL);
	return (str);
}