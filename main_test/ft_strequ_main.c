/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 18:45:54 by lchety            #+#    #+#             */
/*   Updated: 2016/11/30 17:53:45 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libido.h"

int main(void)
{
	char *str1;
	char *str2;

	printf("<-----ft_strequ----->\n");
	str1 = (char *)malloc(150);
		MALLOC_CHECK(str1);
	str2 = (char *)malloc(150);
		MALLOC_CHECK(str2);
	//------------------- test 1 lambda diff same str
	memcpy(str1, "0123456789\0", strlen("0123456789") + 1);
	memcpy(str2, "0123456789\0", strlen("0123456789") + 1);
	if (ft_strequ(str1, str2) == 1)
	{
		TEST(1, "OK");
	}
	else
		TEST(1, "FALSE : very bad");

	//----------------- test 2 str no equ
	memcpy(str1, "0123356789\0", strlen("0123456789") + 1);
	memcpy(str2, "0123456789\0", strlen("0123456789") + 1);
	if (ft_strequ(str1, str2) == 0)
	{
		TEST(2, "OK");
	}
	else
		TEST(2, "FALSE : string equ bad ret");
	
	//---------------- test 3 str 1 more short
	memcpy(str1, "01233\0", strlen("01233") + 1);
	memcpy(str2, "0123456789\0", strlen("0123456789") + 1);

	if (ft_strequ(str1, str2) == 0)
	{
		TEST(3, "OK");
	}
	else
		TEST(3, "FALSE : bad return str 1 more short");

	//---------------- test 4 str 2 more short
	memcpy(str1, "0123456789\0", strlen("0123456789") + 1);
	memcpy(str2, "01233\0", strlen("01233") + 1);

	if (ft_strequ(str1, str2) == 0)
	{
		TEST(4, "OK");
	}
	else
		TEST(4, "FALSE : bad return str 1 more short");

	//---------------- test 5 test tests
	if (ft_strequ("test", "tests") == 0)
	{
		TEST(5, "OK");
	}
	else
		TEST(5, "FALSE : bad return str 1 more short");

	return (0);
}