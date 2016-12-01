/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 19:09:40 by lchety            #+#    #+#             */
/*   Updated: 2016/11/30 17:51:04 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libido.h"

static void test_striter(char *s)
{
	*s += 1;
}

int main(void)
{
	char *str;
	str = (char *)malloc(sizeof(char) * 150);
		MALLOC_CHECK(str);

	printf("<-----ft_striter----->\n");
	memcpy(str, "111141112111311811\0", ft_strlen("111141112111311811") + 1);
	ft_striter(str, &test_striter);
	//printf("%s", str);

	if (!strcmp(str, "222252223222422922"))
	{
		TEST(1, "OK");
	}
	else
		TEST(1, "FALSE : bad bad bad....");

	return (0);
}