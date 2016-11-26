/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 15:38:36 by lchety            #+#    #+#             */
/*   Updated: 2016/11/26 15:40:56 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libido.h"

int main(void)
{
	char *str;
	int i;

	i = 0;
	str = (char *)malloc(sizeof(char) * 250);
		MALLOC_CHECK(str);

	printf("<-----ft_toupper----->\n");
	strcpy(str, "!#@@#$5AA435euAAjufrjIDHHefjeLLOKNBw45675ur7hf)()(*(^^))");
	while (*(str + i) != 0)
	{
		*(str + i) = ft_toupper(*(str + i));
		i++;
	}

	if (!strcmp( str, "!#@@#$5AA435EUAAJUFRJIDHHEFJELLOKNBW45675UR7HF)()(*(^^))"))
	{
		TEST(1, "OK");
	}
	else
		TEST(1, "FALSE : test standard failure");

	return (0);
}