/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc_main.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 14:28:41 by lchety            #+#    #+#             */
/*   Updated: 2016/11/23 13:05:40 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libido.h"

int main(void)
{
	int *ptr;
	int i;

	i = 0;
	printf("<-----ft_memalloc----->\n");
	//---------------- test 1 simple diff
	ptr = (int *)ft_memalloc(sizeof(int) * 50);

	ptr[1]= 6874;
	if(ptr[1] == 6874)
	{
		TEST(1, "OK");
	}
	else
		TEST(1, "FALSE : bad simple diff");

	return (0);
}