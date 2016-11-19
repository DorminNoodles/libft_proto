/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 10:35:41 by lchety            #+#    #+#             */
/*   Updated: 2016/11/18 10:37:51 by lchety           ###   ########.fr       */
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
	
	return (0);
}