/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 19:42:15 by lchety            #+#    #+#             */
/*   Updated: 2016/11/12 13:26:21 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libido.h"

int main(void)
{
	char *str;
	char *dest;
	char *dest_orig;

	printf("<-----ft_strncpy----->\n");
	str = (char *)malloc(sizeof(char) * 100);
		MALLOC_CHECK(str);
	dest = (char *)malloc(sizeof(char) * 100);
		MALLOC_CHECK(dest);
	dest_orig = (char *)malloc(sizeof(char) * 100);
		MALLOC_CHECK(dest_orig);

	//memcpy((void *)str, "Galiminus radicus", 17);
	//----------------------------test 1 No SegFault Protected
	memcpy((void *)str, "012345678", strlen("012345678"));
	memcpy((void *)dest, "0123", strlen("0123"));
	memcpy((void *)dest_orig, "0123", strlen("0123"));
	
	strncpy(dest_orig, str, 9);
	ft_strncpy(dest, str, 9);

	//printf("%s\n", dest);
	//printf("%s\n", dest_orig);

	if (memcmp (dest, dest_orig, 9) == 0)
	{
		TEST(1, "OK");
	}
	else
		TEST(1, "FALSE : No SegFault Protected in strncpy");

	//-----------------------test 2 cpy \0 in src
	memcpy((void *)str, "0123\0", strlen("0123\0") + 1);
	memcpy((void *)dest, "0123456", strlen("0123456"));
	memcpy((void *)dest_orig, "0123456", strlen("0123456"));

	strncpy(dest_orig, str, 5);
	ft_strncpy(dest, str, 5);

	//printf("%s\n", dest);
	//printf("%s\n", dest_orig);

	if (memcmp (dest, dest_orig, 5) == 0)
	{
		TEST(2, "OK");
	}
	else
		TEST(2, "FALSE : no cpy \0");

	//-----------------------test 3 don't copy src \0 if n is too short
	memcpy((void *)str, "0123\0", strlen("0123\0") + 1);
	memcpy((void *)dest, "0123456", strlen("0123456"));
	memcpy((void *)dest_orig, "0123456", strlen("0123456"));

	strncpy(dest_orig, str, 4);
	ft_strncpy(dest, str, 4);

	//printf("%s\n", dest);
	//printf("%s\n", dest_orig);

	if (memcmp (dest, dest_orig, 6) == 0)
	{
		TEST(3, "OK");
	}
	else
		TEST(3, "FALSE : No \0 if n si too short");

	//------------------test 4 if src is more small than dest
	memcpy((void *)str, "012\0", strlen("012\0") + 1);
	memcpy((void *)dest, "012345678", strlen("012345678"));
	memcpy((void *)dest_orig, "012345678", strlen("012345678"));

	strncpy(dest_orig, str, 6);
	ft_strncpy(dest, str, 6);

	//printf("%s\n", dest);
	//printf("%s\n", dest_orig);

	if (memcmp (dest, dest_orig, 6) == 0)
	{
		TEST(4, "OK");
	}
	else
		TEST(4, "FALSE : diff if src is more small than dest");

	//------------------test 5 what's behind the test 4 (dest full of \0 while n)
	memcpy((void *)str, "012\0", strlen("012\0") + 1);
	memcpy((void *)dest, "012345678", strlen("012345678"));
	memcpy((void *)dest_orig, "012345678", strlen("012345678"));

	strncpy(dest_orig, str, 9);
	ft_strncpy(dest, str, 9);

	//printf("%s u\n", (dest + 7));
	//printf("%s u\n", (dest_orig + 7));

	if (memcmp (dest, dest_orig, 7) == 0)
	{
		TEST(5, "OK");
	}
	else
		TEST(5, "FALSE : \0 while n is not end");

	//---------------test 6 empty src
	str = (char *)malloc(sizeof(char) * 100);
		MALLOC_CHECK(str);
	memcpy((void *)str, "\0", strlen("\0" + 1));
	memcpy((void *)dest, "012345678", strlen("012345678"));
	memcpy((void *)dest_orig, "012345678", strlen("012345678"));

	strncpy(dest_orig, str, 8);
	ft_strncpy(dest, str, 8);

	//printf("%s b\n", dest);
	//printf("%s b\n", dest_orig);

	if (memcmp (dest, dest_orig, 8) == 0)
	{
		TEST(6, "OK");
	}
	else
		TEST(6, "FALSE : Diff with empty src");

	//----------------- test 7 if n == 0
	str = (char *)malloc(sizeof(char) * 100);
		MALLOC_CHECK(str);
	dest = (char *)malloc(sizeof(char) * 100);
		MALLOC_CHECK(dest);
	dest_orig = (char *)malloc(sizeof(char) * 100);
		MALLOC_CHECK(dest_orig);
	memcpy((void *)str, "abcde", strlen("abcde" + 1));
	memcpy((void *)dest, "012345678", strlen("012345678"));
	memcpy((void *)dest_orig, "012345678", strlen("012345678"));

	strncpy(dest_orig, str, 0);
	ft_strncpy(dest, str, 0);

	//printf("%s\n", dest);
	//printf("%s\n", dest_orig);

	if (memcmp (dest, dest_orig, 8) == 0)
	{
		TEST(7, "OK");
	}
	else
		TEST(7, "FALSE : if n == 0 diff :(");

	return (0);
}