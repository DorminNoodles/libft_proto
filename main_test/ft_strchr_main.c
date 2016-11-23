/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 13:28:09 by lchety            #+#    #+#             */
/*   Updated: 2016/11/22 19:05:18 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libido.h"

int main(void)
{
	char *str;
	char *ret;
	char *ret_orig;

	str = (char *)malloc(sizeof(char) * 150);
		MALLOC_CHECK(str);
	memcpy((void *)str, "Tempete de Boulettes Geantes\0", strlen("Tempete de Boulettes Geantes") + 1);
	printf("<-----ft_strchr----->\n");
	//-------------test 1 diff return ptr
	ret = ft_strchr(str, 'G');
	ret_orig = strchr(str, 'G');
	//printf("%s\n", ret);
	//printf("%s\n", ret_orig);

	if (!strcmp(ret, ret_orig))
	{
		TEST(1, "OK");
	}
	else
		TEST(1, "FALSE : Diff return ptr");

	//-------------test 2 char dont find
	ret = ft_strchr(str, 'z');
	ret_orig = strchr(str, 'z');


	if (!ret && !ret_orig)
	{
		TEST(2, "OK");
	}
	else
		TEST(2, "FALSE : char dont find bad diff");

	//------------test 3 stop when find \0
	memcpy((void *)str, "Tempete de Boulettes\0 Geantes\0", strlen("Tempete de Boulettes Geantes") + 2);
	ret = ft_strchr(str, 'G');
	ret_orig = strchr(str, 'G');

	if (!ret && !ret_orig)
	{
		TEST(3, "OK");
	}
	else
		TEST(3, "FALSE : stop when find \0");



	//------------test 4 0 in c == search first \0
	memcpy((void *)str, "Tempete de Boulettes Geantes\0", strlen("Tempete de Boulettes Geantes") + 1);
	ret = ft_strchr(str, 0);
	ret_orig = strchr(str, 0);

	if (ret == ret_orig)
	{
		TEST(4, "OK");
	}
	else
		TEST(4, "FALSE : if c == 0 return first \0");

	return (0);
}