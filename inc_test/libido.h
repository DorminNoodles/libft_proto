/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libido.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/11 16:02:23 by lchety            #+#    #+#             */
/*   Updated: 2016/11/09 13:29:27 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBIDO_H
#define LIBIDO_H

#define TEST(nb, good)	printf("Test %d %s\n", nb,good);
#define MALLOC_CHECK(ptr)	if(ptr == NULL) 		\
							{						\
								do_malloc_failed(); \
								return (0);			\
							}
#define DEBUG printf("In function :%s ON line : %d\n", __func__, __LINE__);
#include <string.h>
#include <stdio.h>
#include "libft.h"


void do_malloc_failed(void);

#endif
