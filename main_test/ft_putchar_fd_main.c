/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd_main.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 18:34:23 by lchety            #+#    #+#             */
/*   Updated: 2016/11/21 11:45:42 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libido.h"

int main(void)
{
	int file;
	char buf[500];

	printf("<-----ft_putchar_fd----->\n");
	file = open("ft_putchar_fd.txt", O_RDWR | O_CREAT,  S_IRWXU | S_IRWXG | S_IRWXO);

	ft_putchar_fd('T', file);
	ft_putchar_fd('O', file);
	ft_putchar_fd('T', file);
	ft_putchar_fd('O', file);
	close(file);

	file = open("ft_putchar_fd.txt", O_RDONLY);

	read(file, (void *)buf, 500);
	//printf("%s", buf);

	if (!strcmp(buf, "TOTO"))
	{
		TEST(1, "OK");
	}
	else
		TEST(1, "FALSE : il y a un soucis....");

	close(file);

	return (0);
}
