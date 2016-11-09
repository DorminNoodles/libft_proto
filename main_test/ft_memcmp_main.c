/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 17:09:30 by lchety            #+#    #+#             */
/*   Updated: 2016/11/08 18:17:59 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libido.h"

int main(void)
{
	char *s1;
	char *s2;
	//char *ret;
	//char *ret_orig;
	int i;

	printf("<-----ft_memcmp----->\n");
	s1 = (char *)malloc(150);
		MALLOC_CHECK(s1);
	s2 = (char *)malloc(150);
		MALLOC_CHECK(s2);

	ft_memcpy(s1, "efefegsgz114587gsgyyy", 21);
	ft_memcpy(s2, "efefegsgz114587gsgyyy", 21);	
	

	i = 0;
	if (memcmp(s1, s2, 21) == ft_memcmp(s1, s2, 21))
	{
		TEST(1, "OK");
	}
	else
		TEST(1, "FALSE");

	ft_memcpy(s1, "efefegsgz114587bsgyyy", 21);
	ft_memcpy(s2, "efefegsgz114587gsgyyy", 21);

	if (memcmp(s1, s2, 21) == ft_memcmp(s1, s2, 21))
	{
		TEST(2, "OK");
	}
	else
		TEST(2, "FALSE : diff ")

	if (memcmp(s1, s2, 0) == ft_memcmp(s1, s2, 0))
	{
		TEST(3, "OK")
	}
	else
	{
		TEST(3, "FALSE : n = 0 return (0)")
	}

	ft_memcpy(s1, "", 0);
	ft_memcpy(s2, "abcdef", 6);
	
	if (memcmp(s1, s2, 40) == ft_memcmp(s1, s2, 40))
	{
		TEST(4, "OK");
	}
	else
		TEST(4, "FALSE : diff s1 \"\", s2 \"abcdef\"" );

	ft_memcpy(s1, "abcdef", 6);
	ft_memcpy(s2, "", 0);
	
	//printf("memcmp return : %d   ", memcmp(s1, s2, 40));

	if (memcmp(s1, s2, 40) == ft_memcmp(s1, s2, 40))
	{
		TEST(5, "OK");
	}
	else
		TEST(5, "FALSE : diff s1 \"\", s2 \"abcdef\"" );
	return (0);
}
