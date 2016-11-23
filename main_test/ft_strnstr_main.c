/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 18:19:42 by lchety            #+#    #+#             */
/*   Updated: 2016/11/23 19:25:17 by lchety           ###   ########.fr       */
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
		TEST(4, "FALSE : n too short for find and it find something.... or no return NULL");
	
	//-------------- n second test
	memcpy(haystack, "Kodak est mort\0", ft_strlen("Kodak est mort") + 1);
	memcpy(needle, "est", ft_strlen("est"));
	ret = ft_strnstr(haystack, needle, 9);

	if (ret == haystack + 6)
	{
		TEST(5, "OK");
	}
	else
		TEST(5, "FALSE : n should find something and it doesnt");

	//-------------- test




	return (0);
}