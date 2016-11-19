/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero_main.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/11 19:47:35 by lchety            #+#    #+#             */
/*   Updated: 2016/10/11 19:47:35 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libido.h"

int main(void)
{
	char *str;
	char *str_orig;

	printf("<-----ft_bzero----->\n");
	//-----------------------test 1
	str = malloc(sizeof(char) * 20 + 1);
		MALLOC_CHECK(str);
	str_orig = malloc(sizeof(char) * 20 + 1);

	memcpy(str, "FFFFFFFFFFFFFFFFFFFF", strlen("FFFFFFFFFFFFFFFFFFFF") + 1);
	memcpy(str_orig, "AAAAAAAAAAAAAAAAAAAA", strlen("AAAAAAAAAAAAAAAAAAAA") + 1);
	
	bzero(str, 8);
	ft_bzero(str_orig, 8);

	if(memcmp(str, str_orig, 8) == 0)
	{
		TEST(1, "OK");
	}
	else
		TEST(1, "FALSE : bad simple diff");

	//---------------------test 2 n overflow
	if(str[8] == 'F')
	{
		TEST(2, "OK");
	}	
	else
		TEST(2, "FALSE : n overflow");

	//-------------------test 3 n underflow
	if(str[7] == '\0')
	{
		TEST(3, "OK");
	}
	else
		TEST(3, "False : n underflow pouet pouet");
	
	//--------------------test 4 n = 0
	memcpy(str, "FFFFFFFFFFFFFFFFFFFF", strlen("FFFFFFFFFFFFFFFFFFFF") + 1);
	memcpy(str_orig, "FFFFFFFFFFFFFFFFFFFF", strlen("FFFFFFFFFFFFFFFFFFFF") + 1);
	
	bzero(str, 0);
	ft_bzero(str_orig, 0);

	if(memcmp(str, str_orig, 8) == 0)
	{
		TEST(4, "OK");
	}
	else
		TEST(4, "FALSE : bad n = 0");

	return (0);
}