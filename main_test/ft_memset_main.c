/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/11 15:33:06 by lchety            #+#    #+#             */
/*   Updated: 2016/10/11 15:33:06 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libido.h"

int main(void)
{
	char *str;
	void *address;
	size_t i;
	size_t n;

	printf("<-----ft_memset----->\n");
	i = 0;
	n = 100;
	int c = 8812687;
	str = (char *)malloc(sizeof(char) * n);
	if (str == NULL)
	{
		do_malloc_failed();
		return (0);
	}
	address = str;
	str = ft_memset((void *)str, c, n);
	while (str[i] == (char)c)
		i++;
	if (address == str)
	{
		TEST(1,"OK");
	}
	else
		TEST(1,"FALSE : bad address");
	if (i == n)
	{
		TEST(2,"OK");
	}
	else
		TEST(2,"FALSE : does not correspond to n");
	i = 0;
	str = ft_memset((void *)str, 'N', 20);
	while(str[i] == 'N')
		i++;
	if(i == 20 && str[i] == (char)c)
	{
		TEST(3,"OK");
	}
	else
		TEST(3, "FALSE : does not correspond to n");
	return (0);
}