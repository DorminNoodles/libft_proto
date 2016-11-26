/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 19:06:44 by lchety            #+#    #+#             */
/*   Updated: 2016/11/23 21:04:50 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libido.h"

int main(void)
{
	char *str;
	char *ret;
	char *ret_orig;

	str = (char *)malloc(sizeof(char)* 100);
	printf("<-----ft_strrchr----->\n");
	//------------------ test 1
	memcpy(str, "----------------\0", strlen("----------------") + 1);
	ret = ft_strrchr(str, '-');
	ret_orig = ft_strrchr(str, '-');
	
	if (ret == ret_orig)
	{
		TEST(1, "OK");
	}
	else
		TEST(1, "FALSE : Bad bad bad badaboum");
	
	//---------------- test 2 str null
	ret = ft_strrchr("", 'a');
	ret_orig = strrchr("", 'a');

	if (ret == ret_orig)
	{
		TEST(2, "OK");
	}
	else
		TEST(2, "FALSE : Null str prob");
	
	//---------------- test 3 c == null
	memcpy(str, "aaa\0", strlen("aaa") + 1);
	ret = ft_strrchr(str, 0);
	ret_orig = strrchr(str, 0);

	if (ret == ret_orig)
	{
		TEST(3, "OK");
	}
	else
		TEST(3, "FALSE : Null str prob");

	//---------------- test 4 c == null str empty
	str = (char *)malloc(sizeof(char)* 100);
	memcpy(str, "", strlen(""));
	ret = ft_strrchr(str, 0);
	ret_orig = strrchr(str, 0);
	
	if (ret == ret_orig)
	{
		TEST(4, "OK");
	}
	else
		TEST(4, "FALSE : Null str prob");

	return (0);
}