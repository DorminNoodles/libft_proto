/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_main.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 13:44:28 by lchety            #+#    #+#             */
/*   Updated: 2016/11/19 19:01:26 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libido.h"

void acme_delete(void * content, size_t size)
{
	*(char *)content = 'B';
	*(char *)(content + 1) = 'l';
	size = 0;
}

int main(void)
{
	printf("<-----ft_lstdel----->\n");
	//-------------------test 01
	t_list *test01;
	t_list *la_liste;
	char *str;

	la_liste = ft_lstnew("Kinder Surprise", strlen("Kinder Surprise"));

	la_liste->next = ft_lstnew("Hrade Runner", strlen("Blade Runner"));
	la_liste->next->next = ft_lstnew("Goodbye Vietnam !", strlen("Goodbye Vietnam !"));

	test01 = la_liste->next->next;

	str = la_liste->next->content;
	ft_lstdelone(&la_liste->next, &acme_delete);

	if (*(str) == 'B' && *(str + 1) == 'l' && memcmp(test01->content, "Goodbye Vietnam !", strlen("Goodbye Vietnam !")) == 0)
	{
		TEST(1, "OK");
	}
	else
		TEST(1, "FALSE : hs");

	return (0);
}
