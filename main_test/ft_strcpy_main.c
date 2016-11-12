/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 17:24:00 by lchety            #+#    #+#             */
/*   Updated: 2016/11/10 19:46:01 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libido.h"

int main(void)
{
	char *str;
	char *str2;
	char *str3;
	char *dest;
	char *dest_orig;
	char *ret;
	char *ret_orig;
	int i;

	printf("<-----ft_strcpy----->\n");
	i = 0;
	str2 = (char *)malloc(sizeof(char) * 1);
		MALLOC_CHECK(str2);
	str3 = (char *)malloc(sizeof(char) * 1);
		MALLOC_CHECK(str3);
	str = (char *)malloc(sizeof(char) * 150);
		MALLOC_CHECK(str);
	dest = (char *)malloc(sizeof(char) * 150);
		MALLOC_CHECK(dest);
	dest_orig = (char *)malloc(sizeof(char) * 150);
		MALLOC_CHECK(dest_orig);

	memcpy(str2, "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", 30);
	memcpy(str, "Bolonio trikotak \ty", 19);

	ret_orig = strcpy(dest_orig, str);
	ret = ft_strcpy(dest, str);

	while (i < 19 && *(dest + i) == *(dest_orig + i))
		i++;

	if (i == 19)
	{
		TEST(1, "OK");
	}
	else
	{
		TEST(1, "FALSE : bad copy in dest");
	}
	i = 0;
	while (i < 19 && *(ret + i) == *(ret_orig + i))
		i++;

	if (i == 19)
	{
		TEST(2, "OK");
	}
	else
		TEST(2, "FALSE : bad copy in return");

	ret_orig = strcpy(dest_orig, "");
	ret = ft_strcpy(dest, "");

	if (*(dest_orig) == *(dest))
	{
		TEST(3, "OK");
	}
	else
		TEST(3, "FALSE : bad dest with empty string");

	//-----------------------test 4

	str = (char *)malloc(sizeof(char) * 80);
		MALLOC_CHECK(str);
	dest_orig = (char *)malloc(sizeof(char) * 5);
		MALLOC_CHECK(dest_orig);
	dest = (char *)malloc(sizeof(char) * 5);
		MALLOC_CHECK(dest);
		
	memcpy(str, "Roucool Roucoups", 16);

	strcpy(dest_orig, str);
	ft_strcpy(dest, str);

	i = 0;
	while (dest[i])
		i++;

	if (i > 5)
	{
		TEST(4, "OK");
	}
	else
		TEST(4, "FALSE : il doit segfault :)");
}