/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 10:35:41 by lchety            #+#    #+#             */
/*   Updated: 2016/12/01 03:03:26 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libido.h"
#include <ctype.h>

int main(void)
{
	int alpha = 0;
	int error = 0;

	printf("<-----ft_isdigit----->\n");
	//-------------------test 1
	while (alpha < 255)
	{
		if (isdigit(alpha) != ft_isdigit(alpha))
			error = 1;
		alpha++;
	}

	if (!error)
	{
		TEST(1, "OK");
	}
	else
		TEST(1, "False : bad all ascii test");

	alpha = -1;
	while (alpha < 530)
	{
		if (ft_isdigit(alpha) != isdigit(alpha))
		{
			printf("%d\n", alpha);
			error = 1;
		}
		alpha++;
	}

	//printf("orig : %d\n", isdigit(304));
	//printf("ret : %d\n", ft_isdigit(304));

	if (!error)
	{
		TEST(2, "OK");
	}
	else
		TEST(2, "FALSE : Maurice Chausson");

	return (0);
}
