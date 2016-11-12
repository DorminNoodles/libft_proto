/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit_main.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 12:14:00 by lchety            #+#    #+#             */
/*   Updated: 2016/11/10 12:25:43 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libido.h"

int main(void)
{
	char *str1;
	char **tab_w;
	char c;
	
	c = '*';
	str1 = (char *)malloc(sizeof(char) * 150);
	memcpy(str1, "*bordel******de***merde*heu***j'ai**mal*au*crane*", strlen("*bordel******de***merde*heu***j'ai**mal*au*crane*"));
	
	tab_w = ft_strsplit(str1, c);

	while(*tab_w != NULL)
	{
		printf("%s", *tab_w);
		tab_w++;
	}
}