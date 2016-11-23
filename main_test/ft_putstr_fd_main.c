/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd_main.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 13:15:53 by lchety            #+#    #+#             */
/*   Updated: 2016/11/22 19:07:43 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libido.h"

int main(void)
{
	int fd;
	char buf[200];

	printf("<-----ft_putstr_fd----->\n");
	//--------------test 01
	fd = open("ft_pustr_fd_01.txt", O_RDWR | O_CREAT, S_IRWXU | S_IRWXG | S_IRWXO);

	ft_putstr_fd("Maurice a la peste, c est triste", fd);
	close(fd);

	fd = open("ft_pustr_fd_01.txt", O_RDWR | O_CREAT,  S_IRWXU | S_IRWXG | S_IRWXO);

	read(fd, (void *)buf, 200);

	if(!memcmp(buf, "Maurice a la peste, c est triste", 32))
	{
		TEST(1, "OK");
	}
	else
		TEST(1, "FALSE : C est de la merde");
}