/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 16:21:21 by lchety            #+#    #+#             */
/*   Updated: 2016/11/22 18:42:19 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libido.h"

int main(void)
{
	char *str;
	printf("<-----ft_strdel----->\n");

	str = (void *)malloc(sizeof(char) * 150);
	memcpy(str, "Saperlipopette\0", strlen("Saperlipopette") + 1);

	ft_strdel(&str);

	if (str == NULL)
	{
		TEST(1, "OK");
	}
	else
		TEST(1, "FALSE : no null");

	return (0);
}