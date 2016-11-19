/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 16:45:42 by lchety            #+#    #+#             */
/*   Updated: 2016/11/16 18:54:59 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libido.h"

int main(void)
{
	char *str1;
	char *dest;
	char *dest_orig;

	printf("<-----ft_strlcat----->\n");
	//--------------------test 1 diff standard
	dest = (char *)malloc(100);
		MALLOC_CHECK(dest);
	dest_orig = (char *)malloc(100);
		MALLOC_CHECK(dest_orig);
	str1 = (char *)malloc(100);
		MALLOC_CHECK(str1);

	memcpy(dest, "Pokemon\0", strlen("Pokemon") + 1);
	memcpy(dest_orig, "Pokemon\0", strlen("Pokemon") + 1);
	memcpy(str1, " League\0", strlen(" League") + 1);

	strlcat(dest_orig, str1, strlen("Pokemon League") + 1);
	ft_strlcat(dest, str1, strlen("Pokemon League") + 1);

	printf("%s\n", dest);
	printf("%s\n", dest_orig);

	if (memcmp(dest, dest_orig, 15) == 0)
	{
		TEST(1, "OK");
	}
	else
		TEST(1, "FALSE : Bad diff");

	//--------------------test 2 empty src
	dest = (char *)malloc(100);
		MALLOC_CHECK(dest);
	dest_orig = (char *)malloc(100);
		MALLOC_CHECK(dest_orig);
	str1 = (char *)malloc(100);
		MALLOC_CHECK(str1);

	memcpy(dest, "Pokemon\0", strlen("Pokemon") + 1);
	memcpy(dest_orig, "Pokemon\0", strlen("Pokemon") + 1);
	memcpy(str1, "", 0);

	strlcat(dest_orig, str1, strlen("Pokemon League") + 1);
	ft_strlcat(dest, str1, strlen("Pokemon League") + 1);

	printf("%s\n", dest);
	printf("%s\n", dest_orig);

	if (memcmp(dest, dest_orig, 15) == 0)
	{
		TEST(2, "OK");
	}
	else
		TEST(2, "FALSE : bad empty src");

	//--------------------test 3 empty dest
	dest = (char *)malloc(100);
		MALLOC_CHECK(dest);
	dest_orig = (char *)malloc(100);
		MALLOC_CHECK(dest_orig);
	str1 = (char *)malloc(100);
		MALLOC_CHECK(str1);

	memcpy(dest, "", 0);
	memcpy(dest_orig, "", 0);
	memcpy(str1, " league\0", strlen(" league") + 1);

	strlcat(dest_orig, str1, strlen("Pokemon League") + 1);
	ft_strlcat(dest, str1, strlen("Pokemon League") + 1);

	printf("%s\n", dest_orig);
	printf("%s\n", dest);

	if (memcmp(dest, dest_orig, 10) == 0)
	{
		TEST(3, "OK");
	}
	else
		TEST(3, "FALSE : bad empty dest");

	//--------------------test 4 dest empty src empty
	dest = (char *)malloc(100);
		MALLOC_CHECK(dest);
	dest_orig = (char *)malloc(100);
		MALLOC_CHECK(dest_orig);
	str1 = (char *)malloc(100);
		MALLOC_CHECK(str1);

	memcpy(dest, "", 0);
	memcpy(dest_orig, "", 0);
	memcpy(str1, "", 0);

	strlcat(dest_orig, str1, 5);
	ft_strlcat(dest, str1, 5);

	printf("%s\n", dest);
	printf("%s\n", dest_orig);

	if (memcmp(dest, dest_orig, 10) == 0)
	{
		TEST(4, "OK");
	}
	else
		TEST(4, "FALSE : bad empty empty");

	//-----------------test 5 segfault protected

	//

	

	return (0);
}