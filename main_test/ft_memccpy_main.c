/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/12 03:42:23 by lchety            #+#    #+#             */
/*   Updated: 2016/11/09 12:32:19 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libido.h"

int main(void)
{
	char *src;
	char *src_orig;
	char *dest;
	char *dest_orig;
	char *ret;
	char *ret_orig;
	char *ret2;
	char *ret_orig2;
	int i;

	printf("<-----ft_memccpy----->\n");
	i = 0;
	dest = (char *)malloc(100);
		MALLOC_CHECK(dest);
	dest_orig = (char *)malloc(100);
		MALLOC_CHECK(dest_orig);
	src = (char *)malloc(100);
		MALLOC_CHECK(src);
	src_orig = (char *)malloc(100);
		MALLOC_CHECK(src_orig);
	while (i < 85)
	{
		dest_orig[i] = 'D';
		dest[i] = 'D';
		if(i == 80)
		{
			dest_orig[i] = 'i';
			dest[i] = 'i';
		}
		i++;
	}
	i = 0;
	while (i < 75)
	{
		src_orig[i] = 'G';
		src[i] = 'G';
		if(i == 70)
		{
			src_orig[i] = 'r';
			src[i] = 'r';
		}
		i++;
	}
	src_orig[i] = 'x';
	src[i] = 'x';
	memccpy(dest_orig, src_orig, 'z', 82);
	ft_memccpy(dest, src, 'z', 82);
	memccpy(dest_orig, "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSS Final Fantasy XII", 'z', 49);
	ft_memccpy(dest, "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSS Final Fantasy XII", 'z', 49);
	
	memccpy(dest_orig, "Babarland legoland jacklangue", ' ', 49);
	ft_memccpy(dest, "Babarland legoland jacklangue", ' ', 49);
	
	ret_orig = memccpy(dest_orig, "monsieur z", 'm', 49);
	ret = ft_memccpy(dest, "monsieur z", 'm', 49);
	
	ret_orig2 = memccpy(dest_orig, "ma", 'z', 2);
	ret2 = ft_memccpy(dest, "ma", 'z', 2);
	
	i = 0;
	while (dest[i] == dest_orig[i] && i < 90)
		i++;
	if(i == 90)
	{
		TEST(1, "OK")
	}
	else
		TEST(1, "FALSE : erreur ! on va tous crever !")

	if((ret_orig2 == ret2) && (*ret_orig == *ret))
	{
		TEST(2, "OK")
	}
	else
		TEST(2, "FALSE : error ! bad return");
	return (0);
}
