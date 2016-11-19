/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 17:09:30 by lchety            #+#    #+#             */
/*   Updated: 2016/11/16 16:54:37 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libido.h"

int main(void)
{
	char *s1;
	char *s2;
	//int *tab1;
	//int *tab2;
	int ret;
	int ret_orig;
	int i;
	
	printf("<-----ft_memcmp----->\n");
	ret_orig = 0;
	s1 = (char *)malloc(150);
		MALLOC_CHECK(s1);
	s2 = (char *)malloc(150);
		MALLOC_CHECK(s2);

	ft_memcpy(s1, "efefegsgz114587gsgyyy", 21);
	ft_memcpy(s2, "efefegsgz114587gsgyyy", 21);

	printf("%d\n", memcmp(s1, s2, 21));
	printf("%d\n", ft_memcmp(s1, s2, 21));
	
	i = 0;
	if (memcmp(s1, s2, 21) == ft_memcmp(s1, s2, 21))
	{
		TEST(1, "OK");
	}
	else
		TEST(1, "FALSE");

	ft_memcpy(s1, "efefegsgz114587bsgyyy", 21);
	ft_memcpy(s2, "efefegsgz114587bsgyyy", 21);

	if (memcmp(s1, s2, 21) == ft_memcmp(s1, s2, 21))
	{
		TEST(2, "OK");
	}
	else
		TEST(2, "FALSE : diff ")

	printf("uuu = %d\n", memcmp(s1, s2, 21));
	printf("uuu = %d\n", ft_memcmp(s1, s2, 21));

	if (memcmp(s1, s2, 0) == ft_memcmp(s1, s2, 0))
	{
		TEST(3, "OK")
	}
	else
	{
		TEST(3, "FALSE : n = 0 return (0)")
	}

	ft_memcpy(s1, "", 0);
	ft_memcpy(s2, "abcdef", 6);
	
	if (memcmp(s1, s2, 40) == ft_memcmp(s1, s2, 40))
	{
		TEST(4, "OK");
	}
	else
		TEST(4, "FALSE : diff s1 \"\", s2 \"abcdef\"" );

	ft_memcpy(s1, "abcdef", 6);
	ft_memcpy(s2, "", 0);


	if (memcmp(s1, s2, 40) == ft_memcmp(s1, s2, 40))
	{
		TEST(5, "OK");
	}
	else
		TEST(5, "FALSE : diff s1 \"\", s2 \"abcdef\"" );

	//---------------------------test 6 return simple
	s1 = (char *)malloc(100);
		MALLOC_CHECK(s1);
	s2 = (char *)malloc(100);
		MALLOC_CHECK(s2);
	memcpy((void *)s1, "abcdef\0", strlen("abcdef\0") + 1);
	memcpy((void *)s2, "abcdef\0", strlen("abcdef\0") + 1);
	
	ret_orig = memcmp(s1, s2, 5);
	ret = ft_memcmp(s1, s2, 5);

	printf("%d\n", ret_orig);
	printf("%d\n", ret);

	//---------------------------test 7 return empty s1
	s1 = (char *)malloc(100);
		MALLOC_CHECK(s1);
	s2 = (char *)malloc(100);
		MALLOC_CHECK(s2);
	memcpy((void *)s1, "abcdef\0", strlen("abcdef\0") + 1);
	memcpy((void *)s2, "abcdef\0", strlen("abcdef\0") + 1);
	
	ret_orig = memcmp("", s2, 5);
	ret = ft_memcmp("", s2, 5);

	printf("%d\n", ret_orig);
	printf("%d\n", ret);

	//---------------------------test 8 return empty s2
	memcpy((void *)s1, "abcdef\0", strlen("abcdef\0") + 1);
	memcpy((void *)s2, "abcdef\0", strlen("abcdef\0") + 1);
	
	ret_orig = memcmp(s1, "", 5);
	ret = ft_memcmp(s1, "", 5);

	printf("%d\n", ret_orig);
	printf("%d\n", ret);

	//---------------------------test 9 return empty s1 & s2
	memcpy((void *)s1, "abcdef\0", strlen("abcdef\0") + 1);
	memcpy((void *)s2, "abcdef\0", strlen("abcdef\0") + 1);
	
	ret_orig = memcmp("", "", 80);
	ret = ft_memcmp("", "", 80);

	printf("%d\n", ret_orig);
	printf("%d\n", ret);

	//---------------------------test 9 return empty s1 & s2
	s1 = (char *)malloc(100);
		MALLOC_CHECK(s1);
	s2 = (char *)malloc(100);
		MALLOC_CHECK(s2);
	memcpy((void *)s1, "abcdef\0", strlen("abcdef\0") + 1);
	memcpy((void *)s2, "abcdef\0", strlen("abcdef\0") + 1);
	
	ret_orig = memcmp("", "", 80);
	ret = ft_memcmp("", "", 80);

	printf("%d\n", ret_orig);
	printf("%d\n", ret);

	//---------------------------test 10 ascii
	s1 = (char *)malloc(300);
		MALLOC_CHECK(s1);
	s2 = (char *)malloc(300);
		MALLOC_CHECK(s2);

	//memcpy((void *)s1, "abcdef\0", strlen("abcdef\0") + 1);
	//memcpy((void *)s2, "abcdef\0", strlen("abcdef\0") + 1);
	i = 0;
	while (i < 255)
	{
		s1[i] = i;
		i++;
	}

	i = 0;
	while (i < 255)
	{
		s2[i] = i;
		i++;
	}

	ret_orig = memcmp(s1, s2, 255);
	ret = ft_memcmp(s1, s2, 255);

	printf("%d\n", ret_orig);
	printf("%d\n", ret);

	//---------------------------test 11 s2 more big
	s1 = (char *)malloc(100);
		MALLOC_CHECK(s1);
	s2 = (char *)malloc(100);
		MALLOC_CHECK(s2);
	memcpy((void *)s1, "abcdef\0", strlen("abcdef\0") + 1);
	memcpy((void *)s2, "abcdefghijkl\0", strlen("abcdefghijkl\0") + 1);
	
	ret_orig = memcmp(s1, s2, 80);
	ret = ft_memcmp(s1, s2, 80);

	printf("%d\n", ret_orig);
	printf("%d\n", ret);

	//---------------------------test 12 s1 more big
	s1 = (char *)malloc(100);
		MALLOC_CHECK(s1);
	s2 = (char *)malloc(100);
		MALLOC_CHECK(s2);
	memcpy((void *)s1, "abcdefghijklm\0", strlen("abcdefghijklm\0") + 1);
	memcpy((void *)s2, "abcdefg\0", strlen("abcdefg\0") + 1);
	
	ret_orig = memcmp(s1, s2, 80);
	ret = ft_memcmp(s1, s2, 80);

	printf("%d\n", ret_orig);
	printf("%d\n", ret);

	//---------------------------test 13 n on diff char
	s1 = (char *)malloc(100);
		MALLOC_CHECK(s1);
	s2 = (char *)malloc(100);
		MALLOC_CHECK(s2);
	memcpy((void *)s1, "abcd\0", strlen("abcd\0") + 1);
	memcpy((void *)s2, "abee\0", strlen("abcd\0") + 1);
	
	ret_orig = memcmp("abcdefg", "abcdefe", 7);
	ret = ft_memcmp("abcdefg", "abcdefe", 7);

	printf("%d\n", ret_orig);
	printf("%d\n", ret);
/*
	//---------------------------test 14 n on diff char
	tab1 = (int *)malloc(200);
		MALLOC_CHECK(tab1);
	tab2 = (int *)malloc(200);
		MALLOC_CHECK(tab2);
	//memcpy((void *)s1, "abcd\0", strlen("abcd\0") + 1);
	//memcpy((void *)s2, "abce\0", strlen("abcd\0") + 1);
	
	tab1[0] = -100;
	tab1[1] = -5845488;

	tab2[0] = -100;
	tab2[1] = -588845;

	ret_orig = memcmp(tab1, tab2, 3);
	ret = ft_memcmp(tab1, tab2, 3);
 
	printf("%d\n", ret_orig);
	printf("%d\n", ret);
*/
	return (0);
}
