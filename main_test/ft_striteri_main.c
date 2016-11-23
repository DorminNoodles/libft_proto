/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri_main.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 19:31:23 by lchety            #+#    #+#             */
/*   Updated: 2016/11/22 19:51:42 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libido.h"

static void test_striteri(unsigned int n, char *s)
{
	s[n] += 1;
}

int main(void)
{
	char *str;

	str = (char *)malloc(sizeof(char) * 150);
		MALLOC_CHECK(str);
	printf("<-----ft_striteri----->\n");	
	memcpy(str, "111141112111311811\0", ft_strlen("111141112111311811") + 1);
	ft_striteri(str, &test_striteri);


	if (!strcmp(str, "222252223222422922"))
	{
		TEST(1, "OK");
	}
	else
		TEST(1, "FALSE : bad bad bad....");
	return (0);
}