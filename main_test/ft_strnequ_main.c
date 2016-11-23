/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 14:25:14 by lchety            #+#    #+#             */
/*   Updated: 2016/11/23 17:46:59 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libido.h"

int main(void)
{
	char *str1;
	char *str2;

	str1 = (char *)malloc(sizeof(char) * 100);
		MALLOC_CHECK(str1);
	str2 = (char *)malloc(sizeof(char) * 100);
		MALLOC_CHECK(str2);

	printf("<-----ft_strnequ----->\n");
	//------------------- test 1
	memcpy(str1, "Blade Runner\0", strlen("Blade Runner") + 1);
	memcpy(str2, "Blade Runner\0", strlen("Blade Runner") + 1);

	if (ft_strnequ(str1, str2, 5))
	{
		TEST(1, "OK");
	}
	else
		TEST(1, "FALSE : test standard");

	//------------------- test 2 size arret
	memcpy(str1, "Blade Runne\0", strlen("Blade Runne") + 1);
	memcpy(str2, "Blade Runna\0", strlen("Blade Runne") + 1);

	if (!ft_strnequ(str1, str2, 11))
	{
		TEST(2, "OK");
	}
	else
		TEST(2, "FALSE : prob with n");
	
	//------------------ test 3 \0
	if (ft_strnequ("\0\0", "\0\0", 11))
	{
		TEST(3, "OK");
	}
	else
		TEST(3, "FALSE : prob with n");

	//----------------- test 4 arret by \0
	if (ft_strnequ("Blade run\0", "Blade run\0", 78))
	{
		TEST(4, "OK");
	}
	else
		TEST(4, "FALSE : stop by \0 problem")

	return (0);
}