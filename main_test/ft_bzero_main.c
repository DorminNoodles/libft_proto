/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero_main.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/11 19:47:35 by lchety            #+#    #+#             */
/*   Updated: 2016/10/11 19:47:35 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libido.h"

int main(void)
{
	char *ptr;
	int i;

	printf("<-----ft_bzero----->\n");
	i = 0;
	ptr = (char *)malloc(100);
	while (i < 80)
	{
		ptr[i] = 'F';
		i++;
	}
	ft_bzero((void *)ptr, 40);
	i = 0;
	while (ptr[i] == '\0')
		i++;
	if (i == 40)
	{
		TEST(1, "OK");
	}
	else
		TEST(1, "FALSE : does not correspond to n");
	return (0);
}