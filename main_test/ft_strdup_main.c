/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 14:44:59 by lchety            #+#    #+#             */
/*   Updated: 2016/11/09 15:32:15 by lchety           ###   ########.fr       */
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
	{
		TEST(1, "FALSE");
	}
	return (0);
}
