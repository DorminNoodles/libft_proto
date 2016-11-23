/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 17:48:52 by lchety            #+#    #+#             */
/*   Updated: 2016/11/23 18:19:05 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libido.h"

int main(void)
{
	char *str;
	int i;

	printf("<-----ft_strnew----->\n");
	//---------------- test 1 standard
	str = ft_strnew(150);
	str = memcpy(str, "Metal Gear Rising", strlen ("Metal Gear Rising"));

	if (!memcmp(str, "Metal Gear Rising", strlen("Metal Gear Rising")))
	{
		TEST(1, "OK");
	}
	else
		TEST(1, "FALSE : bouriquet et coco lapin dans un club sm");

	//---------------- test 2 malloc ?
	str = ft_strnew(2000000 + 1);

	i = 0;
	while (i < 2000000)
	{
		str[i] = 'O';
		i++;
	}

	if (str[1500000] == 'O')
	{
		TEST(2, "OK");
	}
	else
		TEST(2, "FALSE : mais c est de la merde");
	//----------------- test 3
	free(str);
	TEST(3, "OK");
	//----------------- test 4 \0 everywhere
	i = 0;
	ft_strnew(650);
	while (i < 649)
	{
		if (str[i] != '\0')
			i = 700;
	}

	if (i == 700)
	{
		TEST(4, "OK");
	}
	else
		TEST(4, "FALSE : no \0 everywhere");

	return (0);
}