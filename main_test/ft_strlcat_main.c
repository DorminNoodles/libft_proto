/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 16:45:42 by lchety            #+#    #+#             */
/*   Updated: 2016/11/30 10:26:39 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libido.h"

int				uf_test_strlcat(void)
{
	char		dest[50] = {0};
	char		dest2[50] = {0};
	size_t		i, j, k;

	if (strlcat(dest, "Hello ", 4) != ft_strlcat(dest2, "Hello ", 4))
		printf("FALSE\n");
	memset(dest, 0, sizeof(dest));
	memset(dest2, 0, sizeof(dest));
	j = strlcat(dest, "Hello ", 4);
	k = ft_strlcat(dest2, "Hello ", 4);
	if (strcmp(dest, dest2) != 0 || j != k)
		printf("FALSE\n");
	j = strlcat(dest, "Hello ", 1);
	k = ft_strlcat(dest2, "Hello ", 1);
	if (strcmp(dest, dest2) != 0 || j != k)
		printf("FALSE\n");
	i = 0;
	while (i < 6)
	{
		dest[4 + i] = 'z';
		dest2[4 + i] = 'z';
		++i;
	}
	j = strlcat(dest, "abc", 6);
	k = ft_strlcat(dest2, "abc", 6);
	if (strcmp(dest, dest2) != 0 || j != k)
		printf("FALSE\n");
	return (1);
}

void test_11_12(void)
{
	char	*str = "the cake is a lie !\0I'm hidden lol\r\n";
	char	buff1[0xF00] = "there is no stars in the sky";
	char	buff2[0xF00] = "there is no stars in the sky";
	size_t	max = strlen("the cake is a lie !\0I'm hidden lol\r\n") + 4;

	size_t	r1 = strlcat(buff1, str, max); //max = 23 + src =19
	size_t	r2 = ft_strlcat(buff2, str, max);

	if (r1 == r2)
	{
		TEST(11, "OK");
	}
	else
	{
		TEST(11, "FALSE : bad return");
	}

	char	s1[4] = "";
	char	s2[4] = "";
	r1 = strlcat(s1, "thx to ntoniolo for this test !", 4);
	r2 = ft_strlcat(s2, "thx to ntoniolo for this test !", 4);

	if (r1 == r2)
	{
		TEST(12, "OK");
	}
	else
	{
		TEST(12, "FALSE : bad return");
	}



	// printf("orig : %d\n", (int)r1);
	// printf("ret : %d\n", (int)r2);
	// printf("orig : %s\n", s1);
	// printf("ret : %s\n", s2);
}


int main(void)
{
	char *str1;
	char *dest;
	char *dest_orig;
	int ret;
	int ret_orig;

	printf("<-----ft_strlcat----->\n");
	//--------------------test 1 diff standard
	dest = (char *)malloc(100);
		MALLOC_CHECK(dest);
	dest_orig = (char *)malloc(100);
		MALLOC_CHECK(dest_orig);
	str1 = (char *)malloc(100);
		MALLOC_CHECK(str1);

	memcpy(dest, "Pokemon\0", strlen("Pokemon") + 1);
	memcpy(dest_orig, "Pokemon\0", strlen("Pokemon") + 1);
	memcpy(str1, " League\0", strlen(" League") + 1);

	strlcat(dest_orig, str1, 14);
	ft_strlcat(dest, str1, 14);

	//printf("%s\n", dest);
	//printf("%s\n", dest_orig);

	if (memcmp(dest, dest_orig, 14) == 0)
	{
		TEST(1, "OK");
	}
	else
		TEST(1, "FALSE : Bad diff");

	//--------------------test 2 empty src
	dest = (char *)malloc(100);
		MALLOC_CHECK(dest);
	dest_orig = (char *)malloc(100);
		MALLOC_CHECK(dest_orig);
	str1 = (char *)malloc(100);
		MALLOC_CHECK(str1);

	memcpy(dest, "Pokemon\0", strlen("Pokemon") + 1);
	memcpy(dest_orig, "Pokemon\0", strlen("Pokemon") + 1);
	memcpy(str1, "", 0);

	strlcat(dest_orig, str1, strlen("Pokemon League") + 1);
	ft_strlcat(dest, str1, strlen("Pokemon League") + 1);

	//printf("%s\n", dest);
	//printf("%s\n", dest_orig);

	if (memcmp(dest, dest_orig, 15) == 0)
	{
		TEST(2, "OK");
	}
	else
		TEST(2, "FALSE : bad empty src");

	//--------------------test 3 empty dest
	dest = (char *)malloc(100);
		MALLOC_CHECK(dest);
	dest_orig = (char *)malloc(100);
		MALLOC_CHECK(dest_orig);
	str1 = (char *)malloc(100);
		MALLOC_CHECK(str1);

	memcpy(dest, "", 0);
	memcpy(dest_orig, "", 0);
	memcpy(str1, " league\0", strlen(" league") + 1);

	strlcat(dest_orig, str1, strlen("Pokemon League") + 1);
	ft_strlcat(dest, str1, strlen("Pokemon League") + 1);

	//printf("%s\n", dest_orig);
	//printf("%s\n", dest);

	if (memcmp(dest, dest_orig, 10) == 0)
	{
		TEST(3, "OK");
	}
	else
		TEST(3, "FALSE : bad empty dest");

	//--------------------test 4 dest empty src empty
	dest = (char *)malloc(100);
		MALLOC_CHECK(dest);
	dest_orig = (char *)malloc(100);
		MALLOC_CHECK(dest_orig);
	str1 = (char *)malloc(100);
		MALLOC_CHECK(str1);

	memcpy(dest, "", 0);
	memcpy(dest_orig, "", 0);
	memcpy(str1, "", 0);

	strlcat(dest_orig, str1, 5);
	ft_strlcat(dest, str1, 5);

	//printf("%s\n", dest);
	//printf("%s\n", dest_orig);

	if (memcmp(dest, dest_orig, 10) == 0)
	{
		TEST(4, "OK");
	}
	else
		TEST(4, "FALSE : bad empty empty");

	//------------------- test 5 return diff
	memcpy(dest, "Pokemon\0", strlen("Pokemon") + 1);
	memcpy(dest_orig, "Pokemon\0", strlen("Pokemon") + 1);
	memcpy(str1, " League\0", strlen(" League") + 1);

	ret_orig = strlcat(dest_orig, str1, strlen("Pokemon League") + 1);
	ret = ft_strlcat(dest, str1, strlen("Pokemon League") + 1);

	// printf("%d\n", ret);
	// printf("orig : %d\n", ret_orig);

	if (ret == ret_orig)
	{
		TEST(5, "OK");
	}
	else
		TEST(5, "FALSE : return are not the same");

	//--------------- test 6 ret 0
	dest = (char *)malloc(100);
		MALLOC_CHECK(dest);
	dest_orig = (char *)malloc(100);
		MALLOC_CHECK(dest_orig);
	str1 = (char *)malloc(100);
		MALLOC_CHECK(str1);

	memcpy(dest, "", 0);
	memcpy(dest_orig, "", 0);
	memcpy(str1, "", 0);

	ret_orig = strlcat(dest_orig, str1, 5);
	ret = ft_strlcat(dest, str1, 5);

	if (memcmp(dest, dest_orig, 10) == 0)
	{
		TEST(6, "OK");
	}
	else
		TEST(6, "FALSE : bad empty empty");	

	//--------------- test 7 ret 0
	char    buf[10];

	bzero(buf, 10);
	strcpy(buf, "abc");
	ret = ft_strlcat(buf, "abcdefghijklmnop", 10);
	// printf("%s\n", buf);
	//mt_assert(strcmp(buf, "abcabcdef") == 0);
	//mt_assert(ft_strlcat(buf, "abcd", 2) == 6);
	//strcmp(buf, "abcabcdef")

	//--------------- test 8 ret ?

	// printf("%d   \n", ret);
	// printf("%s\n", buf);
	//mt_assert(strcmp(buf, "abcabcdef") == 0);
	//mt_assert(ft_strlcat(buf, "abcd", 2) == 6);
	//strcmp(buf, "abcabcdef")

	//--------------- test 9
	char    *str = "the cake is a lie !\0I'm hidden lol\r\n";
	char    buff1[0xF00] = "there is no stars in the sky";
	char    buff2[0xF00] = "there is no stars in the sky";
	
	size_t  max = strlen("the cake is a lie !\0I'm hidden lol\r\n") + 4;
	strlcat(buff1, str, max);
	ft_strlcat(buff2, str, max);

	//printf("ret %s\n", buff1);
	//printf("orig %s\n", buff2);

	if (strcmp(buff1, buff2) == 0)
	{
		TEST(9, "OK");
	}
	else
		TEST(9, "FALSE : bad empty empty");	

	//---------------- test 10 ret size < dest
	dest = (char *)malloc(100);
		MALLOC_CHECK(dest);
	dest_orig = (char *)malloc(100);
		MALLOC_CHECK(dest_orig);
	str1 = (char *)malloc(100);
		MALLOC_CHECK(str1);

	memcpy(dest, "croissants aux fromages\0", strlen("croissants aux fromages") + 1);
	memcpy(dest_orig, "croissants aux fromages\0", strlen("croissants aux fromages") + 1);
	memcpy(str1, " jambon\0", strlen(" jambon") + 1);
	
	ret_orig = strlcat(dest_orig, str1, strlen(" jambon") + 4);
	ret = strlcat(dest, str1, strlen(" jambon") + 4);

	if (ret_orig == ret)
	{
		TEST(10, "OK");
	}
	else
		TEST(10, "FALSE : bad ret");	

	// printf("ret_orig = %d\n", ret_orig);
	// printf("ret = %d\n", ret);
	// printf("orig = %s\n", dest_orig);
	// printf("ft = %s\n", dest);
	
	// printf("###################################\n");

	test_11_12();

	//----------------- test 13
	dest = (char *)malloc(100);
		MALLOC_CHECK(dest);
	dest_orig = (char *)malloc(100);
		MALLOC_CHECK(dest_orig);

	ret_orig = strlcat(dest_orig, "Hello ", 4);
	ret = ft_strlcat(dest, "Hello ", 4);
	
	// printf("ret_orig = %d\n", ret_orig);
	// printf("ret = %d\n", ret);
	// printf("orig = %s\n", dest_orig);
	// printf("ft = %s\n", dest);
	
	if (strcmp(dest_orig, dest) == 0 && ret_orig == ret)
	{		
		TEST(13, "OK");
	}
	else
		TEST(13, "FALSE");

	//-------------- test 14
	ret_orig = strlcat(dest_orig, "Hello ", 1);
	ret = ft_strlcat(dest, "Hello ", 1);
	
	printf("ret_orig = %d\n", ret_orig);
	printf("ret = %d\n", ret);
	printf("orig = %s\n", dest_orig);
	printf("ft = %s\n", dest);
	
	if (strcmp(dest_orig, dest) == 0 && ret_orig == ret)
	{		
		TEST(14, "OK");
	}
	else
		TEST(14, "FALSE");

	//-------------- test 15
	int i;
	i = 0;
	while (i < 6)
	{
		dest_orig[4 + i] = 'z';
		dest[4 + i] = 'z';
		++i;
	}
	ret_orig = strlcat(dest_orig, "abc", 6);
	ret = ft_strlcat(dest, "abc", 6);
	if (strcmp(dest_orig, dest) != 0 || ret_orig != ret)
	{

	}
	else
		TEST(15, "OK");

	//------------- test 16
	uf_test_strlcat();
	
	return (0);
}