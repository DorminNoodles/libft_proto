/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 16:39:41 by lchety            #+#    #+#             */
/*   Updated: 2016/11/20 18:33:35 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libido.h"
#include "libft.h"

int main(void)
{
	char *str;

	str = (char *)malloc(sizeof(char) * 3 + 1);
	str[0] = 'A';
	str[1] = 'B';
	str[2] = 'C';
	printf("<-----ft_memdel----->\n");
	ft_memdel((void **)&str);

	if (!str)
	{
		TEST(1, "OK");
	}
	else
		TEST(1, "FALSE : not null");
	return (0);
}