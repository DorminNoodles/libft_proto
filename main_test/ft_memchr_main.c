/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 14:40:34 by lchety            #+#    #+#             */
/*   Updated: 2016/11/07 17:07:41 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libido.h"
#include "libft.h"

int main(void)
{
	char *str;
	//char *str2;
	char *res;
	char *res_orig;
	char c;
	int i;

	printf("<-----ft_memchr----->\n");
	c = '.';
	i = 0;
	str = (char *)malloc(150);
		MALLOC_CHECK(str);

	ft_memcpy((void *)str, "Kuzco..></?? (_._) 0)987654321+= -784 $%", 39);
	res_orig = memchr(str, c, 15);
	//printf("%s\n", res_orig);
	
	memcpy((void *)str, "Kuzco..></?? (_._) 0)987654321+= -784 $%", 39);
	res = ft_memchr(str, c, 15);
	//printf("%s\n", res);

	while (i < 35 && *(res + i) == *(res_orig + i))
	{
		i++;
	}

	if (i == 35)
	{
		TEST(1, "OK");
	}
	else
	{
		TEST(1, "FALSE : diff :(");
	}
	return (0);
}