/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 13:28:14 by lchety            #+#    #+#             */
/*   Updated: 2016/11/08 14:44:23 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libido.h"

int		main(void)
{
	char *str;
    printf("<-----ft_strlen----->\n");
	str = (char *)malloc(150);
		MALLOC_CHECK(str);

	ft_memcpy((void *)str, "Violon Metal Gear Metal Mario", 28);

	if (strlen(str) == ft_strlen(str))
	{
		TEST(1, "OK");
	}
	else
	{
		TEST(1, "FALSE : diff :(");
	}

	ft_memcpy((void *)str, "", 0);

	if (strlen(str) == ft_strlen(str))
	{
		TEST(2, "OK");
	}
	else
	{
		TEST(2, "FALSE : empty string");
	}
	return (0);
}
