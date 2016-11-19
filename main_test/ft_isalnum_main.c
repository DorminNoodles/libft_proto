/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 09:47:25 by lchety            #+#    #+#             */
/*   Updated: 2016/11/18 10:28:15 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libido.h"
#include <ctype.h>

int main(void)
{
	int alpha = 0;
	int error = 0;

	printf("<-----ft_isalnum----->\n");
	//-------------------test 1
	while (alpha < 127)
	{
		if (isalnum(alpha) != ft_isalnum(alpha))
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