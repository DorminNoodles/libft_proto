/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 14:01:59 by lchety            #+#    #+#             */
/*   Updated: 2016/11/19 09:34:33 by lchety           ###   ########.fr       */
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
	t_list *sousfifre01;
	t_list *sousfifre02;
	t_list *sousfifre03;
	t_list *sousfifre04;
	
	
	printf("<-----ft_lstiter----->\n");
	f = acme;
	masterchief = ft_lstnew("I am the masterchief", strlen("I am the masterchief"));
	sousfifre01 = ft_lstnew("I am sousfifre01", strlen("I am sousfifre01"));
	sousfifre02 = ft_lstnew("I am sousfifre02", strlen("I am sousfifre02"));
	sousfifre03 = ft_lstnew("I am sousfifre03", strlen("I am sousfifre03"));
	sousfifre04 = ft_lstnew("I am sousfifre04", strlen("I am sousfifre04"));

	ft_lstadd(&sousfifre04, sousfifre03);
	ft_lstadd(&sousfifre04, sousfifre02);
	ft_lstadd(&sousfifre04, sousfifre01);
	ft_lstadd(&sousfifre04, masterchief);

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
		
	return (0);
}