/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 21:34:50 by lchety            #+#    #+#             */
/*   Updated: 2016/11/30 17:44:25 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libido.h"

int main(void)
{
	char *haystack;
	char *needle;
	char *ret;
	char *ret_orig;

	haystack = (char *)malloc(sizeof(char) * 150);
		MALLOC_CHECK(haystack);
	needle = (char *)malloc(sizeof(char) * 150);
		MALLOC_CHECK(needle);

	printf("<-----ft_strstr----->\n");
	//---------------- test 1
	memcpy(haystack, "moulinex moulinette crevette\0", strlen("moulinex moulinette crevette") + 1 );
	memcpy(needle, "crevette\0", strlen("crevette") + 1);

	ret_orig = strstr(haystack, needle);
	ret = ft_strstr(haystack, needle);

	//printf("test : %s\n", ret_orig);
	//printf("test : %s\n", ret);

	if (!strcmp(ret, ret_orig))
	{
		TEST(1, "OK");
	}
	else
		TEST(1, "FALSE : C est de la merde");
	
	//---------------- test 2
	memcpy(haystack, "moule\0", strlen("moule") + 1 );
	memcpy(needle, "crevette au poulet\0", strlen("crevette au poulet") + 1);

	ret_orig = strstr(haystack, needle);
	ret = ft_strstr(haystack, needle);

	// printf("test : %s\n", ret_orig);
	// printf("test : %s\n", ret);

	if (ret == ret_orig)
	{
		TEST(2, "OK");
	}
	else
		TEST(2, "FALSE : no return NULL");

	//--------------- test 3
	char	*s1 = "FGZIMBCDFGZIMBCDFGA";
	char	*s2 = "FGZIMBCDFGA";

	char	*i1 = strstr(s1, s2);
	char	*i2 = ft_strstr(s1, s2);
	
	printf("orig : %s\n", i1);
	printf("ret : %s\n", i2);
	if (i1 == i2)
	{
		TEST(3, "OK");
	}
	else
	{
		TEST(3, "FALSE : bad return");
	}

	printf("%s\n", ft_strstr("looololooololl", "loll"));
	return (0);
}