/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/11 20:14:09 by lchety            #+#    #+#             */
/*   Updated: 2016/10/11 20:14:09 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libido.h"

int main(void)
{
	char *str;
	char *str_orig;
	int i;

	i = 0;
	printf("<-----ft_memcpy----->\n");
	str = malloc(70);
	MALLOC_CHECK(str);
	str_orig = malloc(70);
	MALLOC_CHECK(str_orig);
	//--------------test 1 simple diff
	ft_memcpy((void *)str, "blobmobile !", strlen("blobmobile !"));
	memcpy((void *)str_orig, "blobmobile !", strlen("blobmobile !"));

	if(!memcmp(str, str_orig, strlen("blobmobile !")))
	{
		TEST(1, "OK");
	}
	else
		TEST(1, "FALSE : simple first test.... bad diff");


	//---------------test 2 end with \0 with n = nb char (no \0)
	ft_memcpy((void *)str, "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", 40);
	memcpy((void *)str_orig, "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", 40);
	ft_memcpy((void *)str, "Hello wayne's world", 19);
	memcpy((void *)str_orig, "Hello wayne's world", 19);
	if(!memcmp(str, str_orig, 22))
	{
		TEST(2, "OK");
	}
	else
		TEST(2,"FALSE : diff :(");

	//---------------test 3 end with \0 with n = nb char + 1 (yes \0)
	ft_memcpy((void *)str, "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", 40);
	memcpy((void *)str_orig, "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", 40);
	ft_memcpy((void *)str, "Hello wayne's world", 20);
	memcpy((void *)str_orig, "Hello wayne's world", 20);
	if(!memcmp(str, str_orig, 22))
	{
		TEST(3, "OK");
	}
	else
		TEST(3,"FALSE : diff :(");
	return (0);
}