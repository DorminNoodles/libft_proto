/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 21:34:49 by lchety            #+#    #+#             */
/*   Updated: 2016/11/26 15:50:06 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libido.h"

int main(void)
{
	char str1[] = "   \n \t  Bordel Bonduelle Balrog   \n \t \t\0";
	char *str2;
	char *ret;

	printf("<-----ft_strtrim----->\n");
	//----------------- test 1
	int i;
	i = 0;
	
	ret = ft_strtrim(str1);

	if (!strcmp(ret, "Bordel Bonduelle Balrog"))
	{
		TEST(1, "OK");
	}
	else
		TEST(1, "FALSE : test standard bad diff");

	//----------------- test 2
	str2 = (char *)malloc(sizeof(char) * 200);
		MALLOC_CHECK(str2);	
	memcpy(str2, " \t \n \n \t 0.\t  pirate \t.0 \n  \t  \n  ", 34);
	ret = ft_strtrim(str2);
	//printf("%s .0\n", ret);

	if (!strcmp(ret, "0.\t  pirate \t.0"))
	{
		TEST(2, "OK");
	}
	else
		TEST(2, "FALSE : test standard bad diff");

	return (0);
}