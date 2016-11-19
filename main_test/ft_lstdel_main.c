/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 12:22:58 by lchety            #+#    #+#             */
/*   Updated: 2016/11/18 15:22:36 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libido.h"

/*
void acme(void *, size_t)
{
	
}
*/

int main(void)
{
	t_list *filicide;
	t_list *harry;
	t_list *big_mother;

	//---------------------test 1
	printf("<-----ft_lstdel----->\n");
	harry = ft_lstnew("kill me", strlen("kill me"));
	filicide = ft_lstnew("wouaf", strlen("wouaf"));
	big_mother = ft_lstnew("A table", strlen("A table"));

	ft_lstadd(&filicide, harry);
	ft_lstadd(&big_mother, filicide);

	if(harry != NULL)
		printf("I\'m alive !");

	ft_lstdel(&big_mother);

	return (0);
}