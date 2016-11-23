/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 11:50:05 by lchety            #+#    #+#             */
/*   Updated: 2016/11/20 18:08:58 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libido.h"

static t_list *acme(t_list *elem)
{
	char *str;
	if(elem->content != NULL)
	{
		str = (char *)elem->content;
		str[0] = 'A';
	}
	return (elem);
}

int main(void)
{

	printf("<-----ft_lstmap----->\n");
	t_list *vendetta;
	t_list *vost;

	vendetta = ft_lstnew("123", 3);
	vendetta->next = ft_lstnew("234", 3);
	vendetta->next->next = ft_lstnew("567", 3);

	vost = ft_lstmap(vendetta, &acme);

	if (strcmp(vost->content, "A23") == 0 &&
	strcmp(vost->next->content, "A34") == 0 &&
	strcmp(vost->next->next->content, "A67") == 0)
	{
		TEST(1, "OK");
	}
	else
		TEST(1, "FALSE : bad diff");

	//-----------------test 2
	ft_lstmap(NULL, &acme);
	TEST(2, "OK");
		
	ft_lstmap(vendetta, NULL);
	TEST(3, "OK");
	return (0); 
}