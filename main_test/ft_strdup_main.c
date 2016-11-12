/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 14:44:59 by lchety            #+#    #+#             */
/*   Updated: 2016/11/10 16:41:25 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libido.h"

int main(void)
{
	char *str;
	char *res;
	char *res_orig;
	int i;

	printf("<-----ft_strdup----->\n");
	i = 0;
	str = (char *)malloc(33);
		MALLOC_CHECK(str);

	memcpy(str, "kinder bueno babar PIRATE tipiak", 33);

	res_orig = strdup(str);
	res = ft_strdup(str);

	while (res[i] && res_orig[i] && res_orig[i] == res[i])
		i++;
	if (strlen(res) == strlen(res_orig))
	{
		TEST(1, "OK");
	}
	else
		TEST(1, "FALSE : diff :()");
	if (str != res_orig)
	{
		TEST(2, "OK");
	}
	else
		TEST(2, "FALSE : adress are the same");

	res_orig = strdup("");
	res = ft_strdup("");

	if (*res_orig == *res)
	{
		TEST(3, "OK");
	}
	else
	{
		TEST(3, "FALSE : bad return with empty string !")
	}
	return (0);
}