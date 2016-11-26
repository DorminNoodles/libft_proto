/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 12:22:58 by lchety            #+#    #+#             */
/*   Updated: 2016/11/25 16:06:53 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libido.h"


void acme_delete(void * content, size_t size)
{
	*(char *)content = 'B';
	size = 0;
}

int main(void)
{
	t_list *filicide;
	t_list *harry;
	t_list *big_mother;

	//---------------------test 1 standard
	printf("<-----ft_lstdel----->\n");
	harry = ft_lstnew("kill me", strlen("kill me"));
	filicide = ft_lstnew("wouaf", strlen("wouaf"));
	big_mother = ft_lstnew("A table", strlen("A table"));

	filicide->next = harry;
	big_mother->next = filicide;

	ft_lstdel(&big_mother, &acme_delete);

	if (big_mother == NULL)
	{
		TEST(1, "OK");
	}
	else
		TEST(1, "FALSE : marche pas....");


	return (0);
}