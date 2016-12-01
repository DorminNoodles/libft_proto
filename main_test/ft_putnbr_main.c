/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 11:48:42 by lchety            #+#    #+#             */
/*   Updated: 2016/11/30 17:33:52 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libido.h"

static void	ft_putchar_8(char c)
{
	write(1, &c, 1);
}

static void ft_putstr_8(char *str)
{
	while (*str)
	{
		ft_putchar_8(*(str++));
	}
}

int main(void)
{
	printf("<-----ft_putnbr----->\n");
	printf("orig : 424242\n");
	ft_putstr_8("ft : ");
	ft_putnbr(424242);
	ft_putstr_8("\n");
	printf("orig : -87541\n");
	ft_putstr_8("ft : ");
	ft_putnbr(-87541);
	ft_putstr_8("\n");
	printf("orig : -2147483648\n");
	ft_putstr_8("ft : ");
	ft_putnbr(-2147483648);
	ft_putstr_8("\n");
	printf("orig : 2147483647\n");
	ft_putstr_8("ft : ");
	ft_putnbr(2147483647);
	ft_putstr_8("\n");

	ft_putnbr(0);
	ft_putstr_8("\n");
	ft_putnbr(1);
	ft_putstr_8("\n");
	ft_putnbr(-1);
	ft_putstr_8("\n");
	ft_putnbr(12300);
	ft_putstr_8("\n");
	ft_putnbr(10203);
	ft_putstr_8("\n");
	ft_putnbr(-56);
	ft_putstr_8("\n");
	ft_putnbr(2147483647);
	ft_putstr_8("\n");
	ft_putnbr(-2147483648);
	//printf("\n");

	return (0);
}