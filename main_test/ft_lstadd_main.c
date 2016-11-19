/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 12:01:54 by lchety            #+#    #+#             */
/*   Updated: 2016/11/18 12:21:54 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libido.h"

int	main(void)
{
	t_list *mother;
	t_list *mother_killer;
	char *str = " martin";

	printf("<-----ft_lstadd----->\n");
	//------------------test 1 diff lambda
	mother = ft_lstnew("Bonjour", strlen("Bonjour"));
	mother_killer = ft_lstnew(" martin", strlen(" martin"));

	ft_lstadd(&mother, mother_killer);
	if(memcmp(mother->content, str, strlen(" martin")) == 0)
	{
		TEST(1, "OK");
	}
	else
		TEST(1, "FALSE : diff lambda");
	
	return (0);
}