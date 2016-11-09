/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/14 15:15:47 by lchety            #+#    #+#             */
/*   Updated: 2016/10/14 15:15:47 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libido.h"
#include "libft.h"

int main(void)
{
	char *src;
	char *dest;
	char *src_orig;
	char *dest_orig;
	int i;
	
	i = 0;
	printf("<-----ft_memmove----->\n");
	src = (char *)malloc(150);
		MALLOC_CHECK(src);
	dest = (char *)malloc(150);
		MALLOC_CHECK(dest);
	src_orig = (char *)malloc(150);
		MALLOC_CHECK(src_orig);
	dest_orig = (char *)malloc(150);
		MALLOC_CHECK(dest_orig);

	ft_memcpy((void *)src, "LMNOP\n\t", 7);
	ft_memcpy((void *)dest, "ABCDEFGH", 8);
	ft_memcpy((void *)src_orig, "LMNOP\n\t", 7);
	ft_memcpy((void *)dest_orig, "ABCDEFGH", 8);

	while (i < 8 && dest[i] == dest_orig[i])
	{
		i++;
	}
	if (i == 8)
	{
		TEST(1, "OK");
	}
	else
		TEST(1, "FALSE : diff :()");

	ft_memcpy((void *)src, "LMNOPQRSTUVwxyz", 15);
	ft_memcpy((void *)dest, "ABCDEFGH", 8);
	ft_memcpy((void *)src_orig, "LMNOPQRSTUVwxyz", 15);
	ft_memcpy((void *)dest_orig, "ABCDEFGH", 8);

	i = 0;
	while (i < 15 && dest[i] == dest_orig[i])
	{
		i++;
	}

	if (i == 15)
	{
		TEST(2, "OK");
	}
	else
		TEST(2, "FALSE : diff :()");

	ft_memcpy((void *)src, "LMNO\0PQRSTUV\0wxyz", 17);
	ft_memcpy((void *)dest, "ABCDEFGHIJKLMNOPQRST", 20);
	ft_memcpy((void *)src_orig, "LMNO\0PQRSTUV\0wxyz", 17);
	ft_memcpy((void *)dest_orig, "ABCDEFGHIJKLMNOPQRST", 20);

	memmove(dest_orig, src_orig, 17);
	ft_memmove(dest, src, 17);
	
	i = 0;
	while(i < 20 && dest[i] == dest_orig[i])
		i++;
	if (i == 20)
	{
		TEST(3, "OK");
	}
	else
	{
		TEST(3, "FALSE : \\0");
	}
	return (0);
}