/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 12:45:55 by lchety            #+#    #+#             */
/*   Updated: 2016/11/22 13:53:51 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libido.h"

int main(void)
{
	char *str;

	str = (char *)malloc(sizeof(char) * 150);
	printf("<-----ft_strclr----->\n");

	memcpy(str, "rotoscopie quadricolor", strlen("rotoscopie quadricolor"));

	ft_strclr(str);

	if (!memcmp(str, "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", strlen("rotoscopie quadricolor")))
	{
		TEST(1, "OK");
	}
	else
		TEST(2, "FALSE : it is dirty");		

	return (0);
}