/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri_main.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 19:31:23 by lchety            #+#    #+#             */
/*   Updated: 2016/11/30 17:51:48 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libido.h"

static void test_striteri(unsigned int n, char *c)
{
	*c = *c + n;
}

int main(void)
{
	char *str;

	str = (char *)malloc(sizeof(char) * 150);
		MALLOC_CHECK(str);
	printf("<-----ft_striteri----->\n");	
	memcpy(str, "000000000\0", ft_strlen("000000000") + 1);
	ft_striteri(str, &test_striteri);

	//printf("%s", str);

	if (!strcmp(str, "012345678"))
	{
		TEST(1, "OK");
	}
	else
		TEST(1, "FALSE : bad bad bad....");
	return (0);
}