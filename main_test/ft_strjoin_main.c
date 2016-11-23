/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 19:47:35 by lchety            #+#    #+#             */
/*   Updated: 2016/11/22 20:25:24 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libido.h"

int main(void)
{
	char *str1;
	char *str2;
	char *ret;

	str1 = (char *)malloc(sizeof(char) * 150);
		MALLOC_CHECK(str1);
	str2 = (char *)malloc(sizeof(char) * 150);
		MALLOC_CHECK(str2);
	
	printf("<-----ft_strjoin----->\n");
	//---------------test 1 if dif lambda
	memcpy(str1, "1234\0", 5);
	memcpy(str2, "5678", 4);

	ret = ft_strjoin(str1, str2);

	if (!strcmp(ret, "12345678\0"))
	{
		TEST(1, "OK");
	}
	else
		TEST(1, "FALSE : simple diff berk");

	//--------------- test 2 \0
	if(ret[8] == '\0')
	{
		TEST(2, "OK");
	}
	else
		TEST(2, "FALSE : \0 problem");

	//--------------- test 3 str1 empty
	ret = ft_strjoin("", str2);
	if (!strcmp(ret, "5678\0"))
	{
		TEST(3, "OK");
	}
	else
		TEST(3, "FALSE : simple diff berk");

	//--------------- test 4 str2 NULL
	ret = ft_strjoin(str1, "");
	if (!strcmp(ret, "1234\0"))
	{
		TEST(4, "OK");
	}
	else
		TEST(4, "FALSE : simple diff berk");

	//--------------- test 5 no same address
	ret = ft_strjoin(str1, str2);

	if (ret != str1)
	{
		TEST(5, "OK");
	}
	else
		TEST(5, "FALSE : on triche ? pas de malloc ?")

	return (0);
}