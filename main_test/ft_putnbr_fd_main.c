/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd_main.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 12:32:08 by lchety            #+#    #+#             */
/*   Updated: 2016/11/21 13:04:11 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libido.h"

int main(void)
{
	int fd;
	char buf[100];
	printf("<-----ft_putnbr_fd----->\n");
	fd = open("ft_putnbr_fd_01.txt", O_RDWR | O_CREAT, S_IRWXU | S_IRWXG | S_IRWXO);

	ft_putnbr_fd(78, fd);

	close(fd);

	fd = open("ft_putnbr_fd_01.txt", O_RDONLY);
	read(fd, (void *)buf, 100);

	//printf("%s", buf);

	if(!memcmp(buf, "78", 2))
	{
		TEST(1, "OK");
	}
	else
		TEST(1, "FALSE : marche pas, don t work");

	//-----------------test 2
	fd = open("ft_putnbr_fd_02.txt", O_RDWR | O_CREAT, S_IRWXU | S_IRWXG | S_IRWXO);

	ft_putnbr_fd(-2147483648, fd);

	close(fd);

	fd = open("ft_putnbr_fd_02.txt", O_RDONLY);
	read(fd, (void *)buf, 100);

	//printf("%s", buf);

	if(!memcmp(buf, "-2147483648", 11))
	{
		TEST(2, "OK");
	}
	else
		TEST(2, "FALSE : marche pas, don t work");
	
	//-----------------------test 3
	fd = open("ft_putnbr_fd_03.txt", O_RDWR | O_CREAT, S_IRWXU | S_IRWXG | S_IRWXO);

	ft_putnbr_fd(2147483647, fd);

	close(fd);

	fd = open("ft_putnbr_fd_03.txt", O_RDONLY);
	read(fd, (void *)buf, 100);

	//printf("%s", buf);

	if(!memcmp(buf, "2147483647", 10))
	{
		TEST(3, "OK");
	}
	else
		TEST(3, "FALSE : marche pas, don t work");
	
	//-----------------------test 4
	fd = open("ft_putnbr_fd_04.txt", O_RDWR | O_CREAT, S_IRWXU | S_IRWXG | S_IRWXO);
	
	ft_putnbr_fd(0, fd);

	close(fd);

	fd = open("ft_putnbr_fd_04.txt", O_RDONLY);
	read(fd, (void *)buf, 100);

	//printf("%s", buf);

	if(!memcmp(buf, "0", 1))
	{
		TEST(4, "OK");
	}
	else
		TEST(4, "FALSE : marche pas, don t work");
	
	return (0);
}
