/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 10:43:46 by lchety            #+#    #+#             */
/*   Updated: 2016/11/30 11:42:51 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libido.h"

#include <stdlib.h>
#include <string.h>

int	main(void)
{
	char *str;
	char *str_orig;

	printf("<-----ft_itoa----->\n");
	//------------------test 1 Simple diff
	str = (char *)malloc(100);
		MALLOC_CHECK(str);
	str_orig = (char *)malloc(100);
		MALLOC_CHECK(str_orig);

	str_orig = "-25487523";
	str = ft_itoa(-25487523);

	if (memcmp(str_orig, str, strlen(str_orig)) == 0)
	{
		TEST(1, "OK");
	}
	else
		TEST(1, "False : bad -25487523")

	//--------------------test 2 limit negative int
	str = (char *)malloc(100);
		MALLOC_CHECK(str);
	str_orig = (char *)malloc(100);
		MALLOC_CHECK(str_orig);

	str_orig = "-2147483648";
	str = ft_itoa(-2147483648);
	
	if (memcmp(str_orig, str, 3) == 0)
	{
		TEST(2, "OK");
	}
	else
		TEST(2, "False : bad -2147483648");

	//--------------------test 3 limit positive int
	str = (char *)malloc(100);
		MALLOC_CHECK(str);
	str_orig = (char *)malloc(100);
		MALLOC_CHECK(str_orig);

	str_orig = "2147483647";
	str = ft_itoa(2147483647);
	
	if (memcmp(str_orig, str, 3) == 0)
	{
		TEST(3, "OK");
	}
	else
		TEST(3, "False : bad 2147483647");
/*
	//--------------------test 4 \0
	srand(clock());
	int		n;
	char	*d;

	for (int i = 0; i < 2000; i++) 
	{
		n = rand();
		d = ft_itoa(n);

		if (atoi(d) != n) 
		{
			printf("Marche pas n = %d\n", n);
		}
	}
*/
	//------------------- test 5

	printf("test = %s\n", ft_itoa(1005370));

	printf("test str = %s\n", ft_itoa(0));

	return (0);
}

//1053632669
//2147483647