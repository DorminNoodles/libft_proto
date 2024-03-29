/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit_main.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 12:14:00 by lchety            #+#    #+#             */
/*   Updated: 2016/11/30 12:06:35 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libido.h"

int main(void)
{
	char *str1;
	char **dest;
	//char **dest_orig;
	char c;
	int i;

	printf("<-----ft_strsplit----->\n");
	//-------------------------test 1 simple diff
	i = 0;
	c = '*';
	str1 = (char *)malloc(sizeof(char) * 150);
		MALLOC_CHECK(str1);
	memcpy(str1, "*bordel***pouet***pouet***prometheus****\0", strlen("*bordel***pouet***pouet***prometheus****") + 1);
	dest = ft_strsplit(str1, c);


	if (memcmp(dest[0], "bordel", 6) == 0 && memcmp(dest[1], "pouet", 5) == 0 &&
		memcmp(dest[2], "pouet", 5) == 0 && memcmp(dest[1], "prometheus", 10))
	{
		TEST(1, "OK");
	}
	else
		TEST(1, "FALSE : bad simple diff");

	
	//-----------------------test 2 simple diff with \0

	if (memcmp(dest[0], "bordel", 7) == 0 && memcmp(dest[1], "pouet", 6) == 0 &&
		memcmp(dest[2], "pouet", 6) == 0 && memcmp(dest[1], "prometheus", 11))
	{
		TEST(2, "OK");
	}
	else
		TEST(2, "FALSE : \0 where it is ?");
	
	//-----------------------test 3 e*e*e*e*e*e*e*e*e*e

	memcpy(str1, "e*e*e*e*e*e*e*e*e*e", strlen("e*e*e*e*e*e*e*e*e*e"));
	dest = ft_strsplit(str1, c);

	i = 0;
	while (dest[i] != NULL && memcmp(dest[i], "e", 1) == 0)
		i++;
	if (i == 10)
	{
		TEST(3, "OK");
	}
	else
		TEST(3, "FALSE : \0 where it is ?");

	//-----------------------test 4 e*e*e*e*e*e*e*e*e*e

	memcpy(str1, "*******************\0", strlen("*******************") + 1);
	dest = ft_strsplit(str1, c);
	if (dest[0] == NULL)
	{
		TEST(4, "OK");
	}
	else
		TEST(4, "FALSE : should be NULL");

	//-------------------------test 5 NULL end of tab
	i = 0;
	c = '*';
	str1 = (char *)malloc(sizeof(char) * 150);
		MALLOC_CHECK(str1);
	memcpy(str1, "*bordel***pouet***pouet***prometheus****\0", strlen("*bordel***pouet***pouet***prometheus****") + 1);
	dest = ft_strsplit(str1, c);


	if (dest[4] == NULL)
	{
		TEST(5, "OK");
	}
	else
		TEST(5, "FALSE : tab ending by NULL");

	//-----------------------test 6 *****fuck*****

	memcpy(str1, "*****fuck*****\0", strlen("*****fuck*****") + 1);
	dest = ft_strsplit(str1, c);

	if (!memcmp(dest[0], "fuck", 4))
	{
		TEST(6, "OK");
	}
	else
		TEST(6, "FALSE : single word");

	//-----------------------test 7 fuck

	memcpy(str1, "fuck\0", strlen("fuck") + 1);
	dest = ft_strsplit(str1, c);
	
	if (!memcmp(dest[0], "fuck", 4))
	{
		TEST(7, "OK");
	}
	else
		TEST(7, "FALSE : single word");

}