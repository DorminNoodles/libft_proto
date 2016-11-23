/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd_main.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 20:18:34 by lchety            #+#    #+#             */
/*   Updated: 2016/11/21 11:44:24 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libido.h"

int main(void)
{
	int file;
	char buf[500];

	printf("<-----ft_putendl_fd----->\n");
	file = open("ft_putendl_fd.txt", O_RDWR | O_CREAT, S_IRWXU | S_IRWXG | S_IRWXO);

	ft_putendl_fd("Test 1 OK", file);
	close(file);

	file = open("ft_putendl_fd.txt", O_RDONLY);
	
	read(file, (void *)buf, 500);
	//printf("%s", buf);

	if (!strcmp(buf, "Test 1 OK\n"))
	{
		TEST(1, "OK");
	}
	else
		TEST(1, "FALSE : O_O");

	close(file);	
	return (0);	
}