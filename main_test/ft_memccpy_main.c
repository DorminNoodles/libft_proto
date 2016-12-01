/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/12 03:42:23 by lchety            #+#    #+#             */
/*   Updated: 2016/11/09 12:32:19 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libido.h"

int main(void)
{
	char *src;
	char *src_orig;
	char *dest;
	char *dest_orig;
	char *ret;
	char *ret_orig;
	char *ret2;
	char *ret_orig2;
	char c;
	int i;

	printf("<-----ft_memccpy----->\n");
	i = 0;
	dest = (char *)malloc(100);
		MALLOC_CHECK(dest);
	dest_orig = (char *)malloc(100);
		MALLOC_CHECK(dest_orig);
	src = (char *)malloc(100);
		MALLOC_CHECK(src);
	src_orig = (char *)malloc(100);
		MALLOC_CHECK(src_orig);
	while (i < 85)
	{
		dest_orig[i] = 'D';
		dest[i] = 'D';
		if(i == 80)
		{
			dest_orig[i] = 'i';
			dest[i] = 'i';
		}
		i++;
	}
	i = 0;
	while (i < 75)
	{
		src_orig[i] = 'G';
		src[i] = 'G';
		if(i == 70)
		{
			src_orig[i] = 'r';
			src[i] = 'r';
		}
		i++;
	}
	src_orig[i] = 'x';
	src[i] = 'x';
	memccpy(dest_orig, src_orig, 'z', 82);
	ft_memccpy(dest, src, 'z', 82);
	memccpy(dest_orig, "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSS Final Fantasy XII", 'z', 49);
	ft_memccpy(dest, "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSS Final Fantasy XII", 'z', 49);
	
	memccpy(dest_orig, "Babarland legoland jacklangue", ' ', 49);
	ft_memccpy(dest, "Babarland legoland jacklangue", ' ', 49);
	
	ret_orig = memccpy(dest_orig, "monsieur z", 'm', 49);
	ret = ft_memccpy(dest, "monsieur z", 'm', 49);
	
	ret_orig2 = memccpy(dest_orig, "ma", 'z', 2);
	ret2 = ft_memccpy(dest, "ma", 'z', 2);
	i = 0;
	while (dest[i] == dest_orig[i] && i < 90)
		i++;
	if(memcmp(dest_orig, dest, 90) == 0)
	{
		TEST(1, "OK")
	}
	else
		TEST(1, "FALSE : erreur ! on va tous crever !")

	if((ret_orig2 == ret2) && (*ret_orig == *ret))
	{
		TEST(2, "OK")
	}
	else
		TEST(2, "FALSE : error ! bad return");
	

	//--------------------------test 3 return diff
	src = (char *)malloc(100);
		MALLOC_CHECK(src);
	dest = (char *)malloc(100);
		MALLOC_CHECK(dest);
	dest_orig = (char *)malloc(100);
		MALLOC_CHECK(dest_orig);
	memcpy((void *)src, "abcdef\0", strlen("abcdef\0") + 1);
	memcpy((void *)dest, "012345678", strlen("012345678"));
	memcpy((void *)dest_orig, "012345678", strlen("012345678"));
	c = 'e';

	ret_orig = memccpy(dest_orig, src, c, 7);
	ret = ft_memccpy(dest, src, c, 7);

	//printf("orig : %s\n", ret_orig);
	//printf("mut : %s\n", ret);

	if(memcmp(ret, ret_orig, 3) == 0)
	{
		TEST(3, "OK");
	}
	else
		TEST(3, "FALSE : return diff :(");

	//---------------------------test 4
	memcpy((void *)src, "abcdef\0", strlen("abcdef\0") + 1);
	memcpy((void *)dest, "012345678", strlen("012345678"));
	memcpy((void *)dest_orig, "012345678", strlen("012345678"));
	
	memccpy(dest_orig, src, c, 6);
	ft_memccpy(dest, src, c, 6);
	
	//printf("orig : %s\n", dest_orig);
	//printf("mut : %s\n", dest);

	if(memcmp(dest, dest_orig, 9) == 0)
	{
		TEST(4, "OK");
	}
	else
		TEST(4, "FALSE : diff in dest ptr :(");

	//-----------------------test 5 dest + n = 0
	memcpy((void *)src, "abcdef\0", strlen("abcdef\0") + 1);
	memcpy((void *)dest, "012345678", strlen("012345678"));
	memcpy((void *)dest_orig, "012345678", strlen("012345678"));

	memccpy(dest_orig, src, c, 0);
	ft_memccpy(dest, src, c, 0);

	//printf("orig : %s\n", dest_orig);
	//printf("mut : %s\n", dest);

	if(memcmp(dest, dest_orig, 9) == 0)
	{
		TEST(5, "OK");
	}
	else
		TEST(5, "FALSE : diff in dest ptr (n = 0) :(");

	//-------------------test 6 dest + src empty
	memcpy((void *)dest, "012345678", strlen("012345678"));
	memcpy((void *)dest_orig, "012345678", strlen("012345678"));

	memccpy(dest_orig, "", c, 5);
	ft_memccpy(dest, "", c, 5);

	//printf("orig : %s\n", dest_orig);
	//printf("mut : %s\n", dest);

	if(memcmp(dest, dest_orig, 1) == 0)
	{
		TEST(6, "OK");
	}
	else
		TEST(6, "FALSE : diff in dest ptr (src empty) :(");

	//------------------test 7 dest char doesn t exist
	memcpy((void *)src, "abcdef\0", strlen("abcdef\0") + 1);
	memcpy((void *)dest, "012345678", strlen("012345678"));
	memcpy((void *)dest_orig, "012345678", strlen("012345678"));
	c = 'g';

	memccpy(dest_orig, src, c, 5);
	ft_memccpy(dest, src, c, 5);

	//printf("orig : %s\n", dest_orig);
	//printf("mut : %s\n", dest);

	if(memcmp(dest, dest_orig, 1) == 0)
	{
		TEST(7, "OK");
	}
	else
		TEST(7, "FALSE : diff in dest ptr (char c doesn't exist') :(");

	//--------------------test 8 ret + n = 0
	memcpy((void *)src, "abcdef\0", strlen("abcdef\0") + 1);
	memcpy((void *)dest, "012345678", strlen("012345678"));
	memcpy((void *)dest_orig, "012345678", strlen("012345678"));
	c = 'm';

	ret_orig = memccpy(dest_orig, src, c, 0);
	ret = ft_memccpy(dest, src, c, 0);

	//printf("orig : %s\n", ret_orig);
	//printf("mut : %s\n", ret);

	if(ret == ret_orig)
	{
		TEST(8, "OK");
	}
	else
		TEST(8, "FALSE : diff in dest ptr (char c doesn't exist') :(");

	//-------------------test 9 ret + empty src
	memcpy((void *)dest, "012345678", strlen("012345678"));
	memcpy((void *)dest_orig, "012345678", strlen("012345678"));
	c = 'm';

	ret_orig = memccpy(dest_orig, "", c, 3);
	ret = ft_memccpy(dest, "", c, 3);

	//printf("orig : %s\n", ret_orig);
	//printf("mut : %s\n", ret);

	if(ret == ret_orig)
	{
		TEST(9, "OK");
	}
	else
		TEST(9, "FALSE : bad diff in ret with empty src :(");

	//-----------------test 10 oversomething
	memcpy((void *)src, "abcdef\0", strlen("abcdef\0") + 1);
	memcpy((void *)dest, "012345678", strlen("012345678"));
	memcpy((void *)dest_orig, "012345678", strlen("012345678"));
	c = 'm';

	ret_orig = memccpy(dest_orig, "", c, 50);
	ret = ft_memccpy(dest, "", c, 50);

	//printf("orig : %s\n", ret_orig);
	//printf("mut : %s\n", ret);

	if(memcmp(dest, dest_orig, 1) == 0)
	{
		TEST(10, "OK");
	}
	else
		TEST(10, "FALSE : src null bad diff :(");

	//-----------------test 11 c = NULL
	//printf("###############\n");
	memcpy((void *)src, "ab\0defghijklmnop\0", strlen("ab\0defghijklmnop") + 1);
	memcpy((void *)dest, "012345678", strlen("012345678"));
	memcpy((void *)dest_orig, "012345678", strlen("012345678"));
	c = 'm';

	ret_orig = memccpy(dest_orig, src, 0, 20);
	ret = ft_memccpy(dest, src, 0, 20);
	
	if(memcmp(dest, dest_orig, 1) == 0)
	{
		TEST(11, "OK");
	}
	else
		TEST(11, "FALSE : src null bad diff :(");

	char    tab[10];
    char    tab2[10];

    if (NULL != ft_memccpy(NULL, "a", 'a', 0))
		printf("error");
    if (NULL != ft_memccpy(tab, "aaaaaaaaaa", 'b', 10))
        printf("error");
    if (0 != memcmp(tab, "aaaaaaaaaa", 10))
        printf("error");
    if (NULL != ft_memccpy(tab + 1, "bbbbbbbbbb", 'a', 8))
        printf("error");
    if (0 != memcmp(tab, "abbbbbbbba", 10))
        printf("error");
    strcpy(tab2, "cccccee");
    if (tab + 8 != ft_memccpy(tab + 2, tab2, 'e', 7))
        printf("error");
    if (0 != memcmp(tab, "abccccceba", 10))
        printf("error");
    if (0 != strcmp(tab2, "cccccee"))
        printf("error");

	printf("test");

	return (0);
}
