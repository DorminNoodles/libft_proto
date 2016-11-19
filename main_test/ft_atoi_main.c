/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 14:23:39 by lchety            #+#    #+#             */
/*   Updated: 2016/11/18 09:17:55 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libido.h"

int main(void)
{
	char *nstr = "48";
	char *nstr2 = "       +++48";
	char *nstr3 = "    ++484228     eerrf";
	char *nstr4 = "    -+484228     eerrf";
	char *nstr5 = "    -484228     eerrf";
	char *nstr6 = "    +484228     eerrf";
	char *nstr7 = "	   	#484228  ewregdh";

	printf("<-----ft_atoi----->\n");
	//----------------------test 1
	if(atoi(nstr) == ft_atoi(nstr))
	{
		TEST(1, "OK");
	}
	else
		TEST(1, "FALSE : 48");

	//--------------------test 2

	if(atoi(nstr2) == ft_atoi(nstr2))
	{
		TEST(2, "OK");
	}
	else
		TEST(2, "FALSE : +++48");


	//-----------------test 3
	
	if(atoi(nstr3) == ft_atoi(nstr3))
	{
		TEST(3, "OK");
	}
	else
		TEST(3, "FALSE : +++48");
	
	
	//-----------------test 4
	
	if(atoi(nstr4) == ft_atoi(nstr4))
	{
		TEST(4, "OK");
	}
	else
		TEST(4, "FALSE : +++48");
	
	//----------------test 5
	if(atoi(nstr5) == ft_atoi(nstr5))
	{
		TEST(5, "OK");
	}
	else
		TEST(5, "FALSE : +++48");

	//---------------test 6
	if(atoi(nstr6) == ft_atoi(nstr6))
	{
		TEST(6, "OK");
	}
	else
		TEST(6, "FALSE : +++48");
	
	//-------------test 7
	if(atoi(nstr7) == ft_atoi(nstr7))
	{
		TEST(7, "OK");
	}
	else
		TEST(7, "FALSE : +++48");

	return (0);
}