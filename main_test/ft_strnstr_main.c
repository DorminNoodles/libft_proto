/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 18:19:42 by lchety            #+#    #+#             */
/*   Updated: 2016/11/24 19:01:45 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libido.h"
#include <string.h>

int main(void)
{
	char *haystack;
	char *needle;
	char *ret;
	char *ret_orig;

	printf("<-----ft_strnstr----->\n");
	haystack = (char *)malloc(sizeof(char) * 150);
	needle = (char *)malloc(sizeof(char) * 150);
	//----------------test 1 standard
	memcpy(haystack, "Kodak est mort\0", ft_strlen("Kodak est mort") + 1);
	memcpy(needle, "Kodak\0", ft_strlen("Kodak") + 1);

	ret = ft_strnstr(haystack, needle, 20);

	if (ret == haystack)
	{
		TEST(1, "OK");
	}
	else
		TEST(1, "FALSE : Kodak pleure");

	//---------------- test 2 if needle doesnt find == NULL
	memcpy(needle, "Bob\0", ft_strlen("Bob") + 1);
	
	ret = ft_strnstr(haystack, needle, 40);

	if (ret == NULL)
	{
		TEST(2, "OK");
	}
	else
		TEST(2, "FALSE : coco lapin demande un NULL sinon jean christophe va avoir mal");

	//----------------test 3 if needle is empty == haystack
	ret = ft_strnstr(haystack, "", 60);

	if (ret == haystack)
	{
		TEST(3, "OK");
	}
	else
		TEST(3, "FALSE : bordel de nouille if needle is empty return haystack");
	
	//---------------- n overflow
	memcpy(needle, "est\0", ft_strlen("est") + 1);
	ret = ft_strnstr(haystack, needle, 8);

	if (ret == NULL)
	{
		TEST(4, "OK");
	}
	else
		TEST(4, "FALSE : nothing find but it should be");
	
	//-------------- n second test
	memcpy(haystack, "Kodak est mort\0", ft_strlen("Kodak est mort") + 1);
	memcpy(needle, "est", ft_strlen("est"));
	ret = ft_strnstr(haystack, needle, 9);
	ret_orig = strnstr(haystack, needle, 9);

	//printf("%s\n", ret);
	//printf("%s\n", ret_orig);

	if (!strcmp(ret, ret_orig))
	{
		TEST(5, "OK");
	}
	else
		TEST(5, "FALSE : n should find something and it doesnt");


	//-------------- test n == 1
	memcpy(haystack, "Kodak est mort\0", ft_strlen("Kodak est mort") + 1);
	memcpy(needle, "Ko\0", ft_strlen("Ko") + 1);
	ret = ft_strnstr(haystack, needle, 1);
	ret_orig = strnstr(haystack, needle, 1);

	if (ret == ret_orig)
	{
		TEST(6, "OK");
	}
	else
		TEST(6, "FALSE : n should find something and it doesnt");

	//------------test 7 for fun
	memcpy(haystack, "moulinex moulinette crevette\0", strlen("moulinex moulinette crevette") + 1 );
	memcpy(needle, "crevette\0", strlen("crevette") + 1);
	ret = ft_strnstr(haystack, needle, ft_strlen(haystack));
	ret_orig = strnstr(haystack, needle, strlen(haystack));

	//printf("%s\n", ret);
	//printf("%s\n", ret_orig);
	
	if (ret == ret_orig)
	{
		TEST(7, "OK");
	}
	else
		TEST(7, "FALSE : last word, last letter");

	//----------------- test 8 multiple
	memcpy(haystack, "cafe cafe cafe cafe cafe cafe\0", strlen("cafe cafe cafe cafe cafe cafe") + 1 );
	memcpy(needle, "cafe\0", strlen("cafe") + 1);
	ret = ft_strnstr(haystack, needle, ft_strlen(haystack));
	ret_orig = strnstr(haystack, needle, strlen(haystack));

	//printf("%p\n", ret);
	//printf("%p\n", ret_orig);
	
	if (ret == ret_orig)
	{
		TEST(8, "OK");
	}
	else
		TEST(8, "FALSE : bad with multiple match");

	//--------------------- test 9
	memcpy(haystack, "czzzaazfzfzez\0", strlen("czzzaazfzfzez") + 1 );
	memcpy(needle, "cafe\0", strlen("cafe") + 1);
	ret = ft_strnstr(haystack, needle, ft_strlen(haystack));
	ret_orig = strnstr(haystack, needle, strlen(haystack));

	//printf("%p\n", ret);
	//printf("%p\n", ret_orig);
	
	if (ret == ret_orig)
	{
		TEST(9, "OK");
	}
	else
		TEST(9, "FALSE : regarder le code");
	
	

	return (0);
}


/*
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;

	i = 0;
	len++;
	while (*haystack && len != 0)
	{
		printf("%d\n", (int)i);
		if (needle[i] == '\0' || i == ft_strlen(needle))
		{
			printf("%s\n", haystack);
			return ((char *)haystack - (int)ft_strlen(needle));
		}
		if (*haystack != needle[i])
			i = 0;
		else
			i++;
		haystack++;
		len--;
	}
	return (NULL);
}
*/