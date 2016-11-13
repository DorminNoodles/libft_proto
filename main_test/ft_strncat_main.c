/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 16:00:10 by lchety            #+#    #+#             */
/*   Updated: 2016/11/12 16:43:32 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libido.h"

int main(void)
{
	char *str1;
	char *str2;
	char *str1_orig;
	char *str2_orig;
	char *ret;
	char *ret_orig;
	 
	printf("<-----ft_strncat----->\n");
	str1 = (char *)malloc(sizeof(char) * 100);
		MALLOC_CHECK(str1);
	str2 = (char *)malloc(sizeof(char) * 100);
		MALLOC_CHECK(str2);
	str1_orig = (char *)malloc(sizeof(char) * 100);
		MALLOC_CHECK(str1_orig);
	str2_orig = (char *)malloc(sizeof(char) * 100);
		MALLOC_CHECK(str2_orig);

	//----------------------test 1 diff lambda
	memcpy(str1, "abcdef", strlen("abcdef"));
	memcpy(str2, "123456", strlen("123456"));
	memcpy(str1_orig, "abcdef", strlen("abcdef"));
	memcpy(str2_orig, "123456", strlen("123456"));

	strncat(str1_orig, str2_orig, 3);
	ft_strncat(str1, str2, 3);

	if (memcmp(str1, str1_orig, 11) == 0)
	{
		TEST(1, "OK");
	}
	else
		TEST(1, "FALSE : diff :(");

	//----------------test 2 no protected against segfault
	str1 = (char *)malloc(sizeof(char) * 7);
		MALLOC_CHECK(str1);
	str2 = (char *)malloc(sizeof(char) * 10);
		MALLOC_CHECK(str2);
	str1_orig = (char *)malloc(sizeof(char) * 10);
		MALLOC_CHECK(str1_orig);
	str2_orig = (char *)malloc(sizeof(char) * 7);
		MALLOC_CHECK(str2_orig);
	
	memcpy(str1, "abcdef", strlen("abcdef"));
	memcpy(str2, "123456789", strlen("123456789"));
	memcpy(str1_orig, "abcdef", strlen("abcdef"));
	memcpy(str2_orig, "123456789", strlen("123456789"));

	strncat(str1_orig, str2_orig, 9);
	ft_strncat(str1, str2, 9);

	//printf("%s\n", str1_orig);
	//printf("%s\n", str1);

	if (memcmp(str1, str1_orig, 8) == 0)
	{
		TEST(2, "OK");
	}
	else
		TEST(2, "FALSE : bordel de merde mais il y a une protection contre les segfault ou je reve ?");

	//------------------test 3 \0 after second words
	str1 = (char *)malloc(sizeof(char) * 100);
		MALLOC_CHECK(str1);
	str2 = (char *)malloc(sizeof(char) * 100);
		MALLOC_CHECK(str2);
	str1_orig = (char *)malloc(sizeof(char) * 100);
		MALLOC_CHECK(str1_orig);
	str2_orig = (char *)malloc(sizeof(char) * 100);
		MALLOC_CHECK(str2_orig);

	memcpy(str1, "abcdef", strlen("abcdef"));
	memcpy(str2, "123456", strlen("123456"));
	memcpy(str1 + 10, "ghijkl", strlen("ghijkl"));
	memcpy(str1_orig, "abcdef", strlen("abcdef"));
	memcpy(str2_orig, "123456", strlen("123456"));
	memcpy(str1_orig + 10, "ghijkl", strlen("ghijkl"));

	strncat(str1_orig, str2_orig, 6);
	strncat(str1, str2, 6);

	//printf("%s\n", str1_orig);
	//printf("%s\n", str1);

	if(memcmp(str1_orig, str1, 12) == 0)
	{
		TEST(3, "OK");
	}
	else
		TEST(3, "FALSE : no \0 after str");
	
	//----------------test 4 \0 src
	memcpy(str1, "abcdef", strlen("abcdef"));
	memcpy(str1_orig, "abcdef", strlen("abcdef"));

	strncat(str1_orig, "", 5);
	strncat(str1, "", 5);

	//printf("%s\n", str1_orig);
	//printf("%s\n", str1);

	if (memcmp(str1, str1_orig, 6) == 0)
	{
		TEST(4, "OK");
	}
	else
		TEST(4, "FALSE : \0 in src dont work")

	//-------------test 5 \0 dest
	memcpy(str1_orig, "\0", 1);
	memcpy(str1, "\0", 1);

	strncat(str1_orig, str2_orig, 6);
	ft_strncat(str1, str2, 6);

	//printf("%s\n", str1_orig);
	//printf("%s\n", str1);

	if (memcmp(str1, str1_orig, 6) == 0)
	{
		TEST(5, "OK");
	}
	else
		TEST(5, "FALSE : \0 in dest dont work")
	
	//------------test 6 return diff
	memcpy(str1, "abcdef", strlen("abcdef"));
	memcpy(str2, "123456", strlen("123456"));
	memcpy(str1_orig, "abcdef", strlen("abcdef"));
	memcpy(str2_orig, "123456", strlen("123456"));

	ret_orig = strcat(str1_orig, str2_orig);
	ret = ft_strcat(str1, str2);

	if (memcmp(str1_orig, str1, 12) == 0)
	{
		TEST(6, "OK");
	}
	else
		TEST(6, "FALSE : Bip Bip et coyote, bad diff in return :(");


	return (0);
}