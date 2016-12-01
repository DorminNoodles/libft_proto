/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 14:07:18 by lchety            #+#    #+#             */
/*   Updated: 2016/12/01 03:04:43 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libido.h"

int main(void)
{
	//--------------- test 1
	t_list	*pain;

	pain = ft_lstnew("linux", strlen("linux"));

	printf("<-----ft_lstnew----->\n");
	if (strcmp(pain->content, "linux") == 0)
	{
		TEST(1, "OK");
	}
	else
		TEST(1, "FALSE : bad very very bad.... nothing work");

	//-------------- test 2 content NULL
	pain = ft_lstnew(NULL, 3);
	TEST(2, "OK");

	//--------------- test 3 content_size 0 if content NULL
	if((int)pain->content_size == 0 && pain->content == NULL)
	{
		TEST(3, "OK");
	}
	else
		TEST(3, "FALSE : content_size must be 0 if content == NULL");

	//------------- test 4 size 0
	ft_lstnew("Fernand", 0);
	TEST(4, "OK");


	//------------- test 5

	t_list *begin;
	size_t v;

	v = 1;

	begin = ft_lstnew(NULL, 36);
	if (begin != 0 && (begin->content_size != 0 || begin->content != NULL))
	{
		TEST(5, "FALSE");
	}
	else
	{
		TEST(5, "OK");
	}
	free(begin);
	
	return (0);
	
}