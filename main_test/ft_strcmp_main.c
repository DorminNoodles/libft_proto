/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 13:54:55 by lchety            #+#    #+#             */
/*   Updated: 2016/11/26 19:01:14 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libido.h"

int main(void)
{
	char *str1;
	char *str2;

	str1 = (char *)malloc(sizeof(char));
	str2 = (char *)malloc(sizeof(char));

	printf("<-----ft_strcmp----->\n");
	//----------------- test 1 diff lambda
	memcpy(str1, "123456789\0", strlen("123456789") + 1);
	memcpy(str2, "123456789\0", strlen("123456789") + 1);

	if (strcmp(str1, str2) == ft_strcmp(str1, str2))
	{
		TEST(1, "OK");
	}
	else
		TEST(1, "FALSE : diff");

	//----------------- test 2 str1 size < str2 size
	memcpy(str1, "1234\0", strlen("1234") + 1);
	memcpy(str2, "123456789\0", strlen("123456789") + 1);
	
	if (strcmp(str1, str2) == ft_strcmp(str1, str2))
	{
		TEST(2, "OK");
	}
	else
		TEST(2, "FALSE : str1 more small");
	//----------------- test 3 str1 size > str2 size
	memcpy(str1, "123456789\0", strlen("123456789") + 1);
	memcpy(str2, "1234\0", strlen("1234") + 1);
	
	if (strcmp(str1, str2) == ft_strcmp(str1, str2))
	{
		TEST(3, "OK");
	}
	else
		TEST(3, "FALSE : str1 more big");

	//----------------- test 4 str 2 = \0
	memcpy(str1, "123456789", strlen("123456789") + 1);
	memcpy(str2, "\0", strlen("\0") + 1);
	
	if (strcmp(str1, str2) == ft_strcmp(str1, str2))
	{
		TEST(4, "OK");
	}
	else
		TEST(4, "FALSE : str2 == \\0 bad diff");

	//----------------- test 5 str 1 = \0
	memcpy(str1, "\0", strlen("\0") + 1);
	memcpy(str2, "123456789", strlen("123456789") + 1);
	
	if (strcmp(str1, str2) == ft_strcmp(str1, str2))
	{
		TEST(5, "OK");
	}
	else
		TEST(5, "FALSE : str1 == \0 bad diff");


	
	return (0);
}