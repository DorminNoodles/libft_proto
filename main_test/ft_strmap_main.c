/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 12:30:23 by lchety            #+#    #+#             */
/*   Updated: 2016/11/23 13:47:37 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libido.h"

static char test_strmap(char c)
{
	return (c += 'A' - 'a');
}

int main(void)
{
	char *str;
	char *ret;

	str = (char *)malloc(sizeof(char) * 150);
		MALLOC_CHECK(str);
	printf("<-----ft_strmap----->\n");
	//-------------- test 1 standard
	memcpy(str, "chocapic\0", strlen("chocapic") + 1);

	ret = ft_strmap(str, &test_strmap);


	if (!strcmp(ret, "CHOCAPIC"))
	{
		TEST(1, "OK");
	}
	else
		TEST(1, "FALSE : error test standard, marche pas");

	//------------- test 2 str NULL
	ret = ft_strmap("", &test_strmap);

	TEST(2, "OK");
	//------------- test 3 f NULL
	ret = ft_strmap("chocapic\0", NULL);

	TEST(3, "OK");

	return (0);
}