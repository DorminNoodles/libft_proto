/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 14:06:59 by lchety            #+#    #+#             */
/*   Updated: 2016/11/22 15:27:48 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libido.h"

int main(void)
{
	char *str1;
	char *str2;

	str1 = (char *)malloc(sizeof(char) * 150);
	str2 = (char *)malloc(sizeof(char) * 150);

	printf("<-----ft_strncmp----->\n");
	//----------------- test 1 diff lambda n < strlen
	memcpy(str1, "123456789\0", strlen("123456789") + 1);
	memcpy(str2, "123456789\0", strlen("123456789") + 1);

	if (strncmp(str1, str2, strlen("123456789") - 1) == ft_strncmp(str1, str2, strlen("123456789") - 1))
	{
		TEST(1, "OK");
	}
	else
		TEST(1, "FALSE : diff");

	//----------------- test 2 diff n > strlen
	memcpy(str1, "123456789\0", strlen("123456789") + 1);
	memcpy(str2, "123456789\0", strlen("123456789") + 1);

	if (strncmp(str1, str2, strlen("123456789") + 5) == ft_strncmp(str1, str2, strlen("123456789") + 5))
	{
		TEST(2, "OK");
	}
	else
		TEST(2, "FALSE : diff n > strlen");

	//----------------- test 3 n stop same ptr
	memcpy(str1, "123456789\0", strlen("123456789") + 1);
	memcpy(str2, "12345r789\0", strlen("123456789") + 1);
	
	if (strncmp(str1, str2, 6) == ft_strncmp(str1, str2, 6))
	{
		TEST(3, "OK");
	}
	else
		TEST(3, "FALSE : no stop same n ");

	//---------------- test 4 str1 == NULL + n = 0
	if (strncmp(NULL, str2, 0) == ft_strncmp(NULL, str2, 0))
	{
		TEST(4, "OK");
	}
	else
		TEST(4, "FALSE : str1 == NULL && n = 0 ");

	//----------------- test 5 str2 == NULL + n = 0
	if (strncmp(str1, NULL, 0) == ft_strncmp(str1, NULL, 0))
	{
		TEST(5, "OK");
	}
	else
		TEST(5, "FALSE : str2 == NULL && n = 0 ");

	//----------------- test 6 str1 && str2 == NULL && n = 0
	if (strncmp(NULL, NULL, 0) == ft_strncmp(NULL, NULL, 0))
	{
		TEST(6, "OK");
	}
	else
		TEST(6, "FALSE : str2 && str1 == NULL && n = 0 bad diff");
	
	//----------------- test 7 \0 in middle
	memcpy(str1, "12345\0789\0", strlen("12345\0789") + 1);
	memcpy(str2, "12345\0789\0", strlen("12345\0789") + 1);
	
	if (strncmp(str1, str2, 9) == ft_strncmp(str1, str2, 9))
	{
		TEST(7, "OK");
	}
	else
		TEST(7, "FALSE : \0 in middle");

	//----------------- test 8 str1 size < str2 size
	memcpy(str1, "1234", strlen("1234") + 1);
	memcpy(str2, "123456789", strlen("123456789") + 1);
	
	if (strncmp(str1, str2, 9) == ft_strncmp(str1, str2, 9))
	{
		TEST(8, "OK");
	}
	else
		TEST(8, "FALSE : str1 more small");
	//----------------- test 9 str1 size > str2 size
	memcpy(str1, "123456789", strlen("123456789") + 1);
	memcpy(str2, "1234", strlen("1234") + 1);
	
	if (strncmp(str1, str2, 9) == ft_strncmp(str1, str2, 9))
	{
		TEST(9, "OK");
	}
	else
		TEST(9, "FALSE : str1 more big");

	//----------------- test 10 n == 0
	memcpy(str1, "123456789", strlen("123456789") + 1);
	memcpy(str2, "123456789", strlen("123456789") + 1);
	
	if (strncmp(str1, str2, 0) == ft_strncmp(str1, str2, 0))
	{
		TEST(10, "OK");
	}
	else
		TEST(10, "FALSE : n == 0");
	
	//----------------- test 11 str1 > str2
	memcpy(str1, "128456789", strlen("123456789") + 1);
	memcpy(str2, "123456789", strlen("123456789") + 1);
	
	if (strncmp(str1, str2, 0) == ft_strncmp(str1, str2, 0))
	{
		TEST(11, "OK");
	}
	else
		TEST(11, "FALSE : str1 > in ascii");
	//----------------- test 12 str1 < str2
	memcpy(str1, "123456789", strlen("123456789") + 1);
	memcpy(str2, "123856789", strlen("123456789") + 1);
	
	if (strncmp(str1, str2, 0) == ft_strncmp(str1, str2, 0))
	{
		TEST(12, "OK");
	}
	else
		TEST(12, "FALSE : str1 < in ascii");

	return (0);
}