/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/05 20:49:57 by lchety            #+#    #+#             */
/*   Updated: 2016/11/13 16:29:40 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;

	i = 0;
	if (n <= 0)
		return (0);
	while (*(char *)(s1 + i) == *(char *)(s2 + i) && i < n - 1)
		i++;
	return (*(char *)(s1 + i) - *(char *)(s2 + i));
}
