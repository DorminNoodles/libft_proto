/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/11 20:14:09 by lchety            #+#    #+#             */
/*   Updated: 2016/10/11 20:14:09 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libido.h"

int main(void)
{
	char *str;
	char *str_orig;
	int i;

	i = 0;
	printf("<-----ft_memcpy----->\n");
	str = malloc(70);
	MALLOC_CHECK(str);
	str_orig = malloc(70);
	MALLOC_CHECK(str_orig);

	ft_memcpy((void *)str, "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", 40);
	memcpy((void *)str_orig, "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", 40);
	ft_memcpy((void *)str, "Hello wayne's world", 30);
	memcpy((void *)str_orig, "Hello wayne's world", 30);
	while(i < 60)
		i++;
	if(str[i] == str_orig[i])
	{
		TEST(1, "OK");
	}
	else
		TEST(1,"FALSE : diff :(");
	ft_memcpy((void *)str, "Marilou", 5);
	memcpy((void *)str_orig, "Marilou", 5);
	i = 0;
	while(i < 60)
		i++;
	if(str[i] == str_orig[i])
	{
		TEST(2, "OK");
	}
	else
		TEST(2,"FALSE : diff :(");
	return (0);
}