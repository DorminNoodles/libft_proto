/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 11:50:05 by lchety            #+#    #+#             */
/*   Updated: 2016/11/26 17:02:31 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libido.h"
/*
static t_list *acme(t_list *elem)
{
	char *temp;
	t_list *new;
	new = (t_list*)malloc(sizeof(t_list));
	new->next = (t_list*)malloc(sizeof(t_list));
	new->content = malloc(sizeof(char) * (int)ft_strlen((char*)elem->content));
	strcpy(new->content, elem->content);
	temp = new->content;
	temp[0] = 'A';
	return (new);
}
*/
int main(void)
{
	/*
	printf("<-----ft_lstmap----->\n");
	t_list *porcinet;
	t_list *vost;
	//---------------- test 1
	porcinet = ft_lstnew("123", 3);
	porcinet->next = ft_lstnew("234", 3);
	porcinet->next->next = ft_lstnew("567", 3);

	vost = ft_lstmap(porcinet, &acme);

	if (strcmp(vost->content, "A23") == 0 &&
	strcmp(vost->next->content, "A34") == 0 &&
	strcmp(vost->next->next->content, "A67") == 0)
	{
		TEST(1, "OK");
	}
	else
		TEST(1, "FALSE : bad diff");

	//---------------- test2
	if (strcmp(porcinet->content, "123") == 0 &&
	strcmp(porcinet->next->content, "234") == 0 &&
	strcmp(porcinet->next->next->content, "567") == 0)
	{
		TEST(2, "OK");
	}
	else
		TEST(2, "FALSE : bad diff");
	*/
	return (0);
}