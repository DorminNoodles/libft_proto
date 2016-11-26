/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 18:52:16 by lchety            #+#    #+#             */
/*   Updated: 2016/11/24 21:33:50 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libido.h"

int main(void)
{
	char *str;
	char *ret;
	
	str = (char *)malloc(sizeof(char) * 150);
	
	printf("<-----ft_strsub----->\n");
	//------------------ test 1
	memcpy(str, "Kodak est mort\0", ft_strlen("Kodak est mort") + 1);

	ret = ft_strsub(str, 5, 3);
	//printf("%s\n", ret);

	if (!strcmp(ret, " es"))
	{
		TEST(1, "OK");
	}
	else
		TEST(1, "FALSE : Kodak pleure");

	//------------------ test 2
	memcpy(str, "Kodak est mort\0", ft_strlen("Kodak est mort") + 1);

	ret = ft_strsub(str, 5, 25);
	//printf("%s\n", ret);

	if (!strcmp(ret, " est mort"))
	{
		TEST(2, "OK");
	}
	else
		TEST(2, "FALSE : Kodak pleure");

	return (0);
}