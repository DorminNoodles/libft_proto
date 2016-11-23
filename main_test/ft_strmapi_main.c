/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 13:11:27 by lchety            #+#    #+#             */
/*   Updated: 2016/11/23 14:05:42 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libido.h"

static char test_strmapi(unsigned int i, char c)
{
	i = 42;
	return (c += 'A' - 'a');
}

int main(void)
{
	char *str;
	char *ret;

	str = (char *)malloc(sizeof(char) * 150);
		MALLOC_CHECK(str);

	printf("<-----ft_strmapi----->\n");
	//---------------- test 1 standard
	memcpy(str, "chocapic\0", strlen("chocapic") + 1);
	ret = ft_strmapi(str, &test_strmapi);

	if(!strcmp(ret, "CHOCAPIC"))
	{
		TEST(1, "OK");
	}
	else
		TEST(1, "FALSE : bad bad bad");

	//---------------- test 2 str NULL
	ret = ft_strmapi(NULL, &test_strmapi);

	TEST(2, "OK");

	//---------------- test 3 f NULL
	ret = ft_strmapi("chocapic\0", NULL);

	TEST(3, "OK");

	return (0);
}