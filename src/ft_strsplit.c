/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/08 14:04:04 by lchety            #+#    #+#             */
/*   Updated: 2016/10/08 14:04:04 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **ft_strsplit(char const *s, char c)
{
	char **tab;
	size_t i;
	size_t nb_w;
	size_t temp;
	size_t j;
	
	i = 0;
	nb_w = 0;
	j = 0;
	/*
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			nb_w++;
		while (s[i] != '\0' && s[i] != c)
			i++;
	}
	*/

	while (s[i])
	{
		if(s[i] == c && s[i + 1] != c && s[i + 1])
			nb_w++;
		i++;
	}


	i = 0;
	tab = (char**)malloc(sizeof(char*) * nb_w+1);
	if (tab == NULL)
		return (NULL);
	while(nb_w > 0)
	{
		temp = 0;
		while (s[i] == c)
			i++;
		while (s[i] != '\0' && s[i] != c)
		{
			i++;
			temp++;
		}
		tab[j] = ft_strnew(temp);
		if(tab[j] == NULL)
			return (NULL);
		ft_memcpy(tab[j], &s[i - temp], temp);
		nb_w--;
		j++;
	}
	tab[j] = NULL;
	return (tab);
}