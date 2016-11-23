/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 14:01:59 by lchety            #+#    #+#             */
/*   Updated: 2016/11/20 11:47:46 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libido.h"

static void acme(t_list *elem)
{
	elem->content = "FFF";
}

int main(void)
{
	void (*f)(t_list *elem);
	t_list *masterchief;

	
	
	printf("<-----ft_lstiter----->\n");
	f = acme;
	masterchief = ft_lstnew("WWW", 3);
	masterchief->next = ft_lstnew("WWW", 3);
	masterchief->next->next = ft_lstnew("WWW", 3);
	masterchief->next->next->next = ft_lstnew("WWW", 3);
	
	ft_lstiter(masterchief, f);

	if(strcmp(masterchief->content, "FFF") == 0)
	{
		TEST(1, "OK");
	}
	else
		TEST(1, "FALSE : bad diff");

	if(strcmp(masterchief->next->content, "FFF") == 0)
	{
		TEST(2, "OK");
	}
	else
		TEST(2, "FALSE : bad diff");
		
	if(strcmp(masterchief->next->next->content, "FFF") == 0)
	{
		TEST(3, "OK");
	}
	else
		TEST(3, "FALSE : bad diff");
	
	//---------------------- test 4 list NULL
	ft_lstiter(NULL, f);
	TEST(4, "OK");

	//---------------------- test 5 *f NULL
	ft_lstiter(masterchief, NULL);
	TEST(5, "OK");

	return (0);
}
