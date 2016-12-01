/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 13:28:09 by lchety            #+#    #+#             */
/*   Updated: 2016/11/30 21:39:21 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libido.h"

int main(void)
{
	char *str;
	char *ret;
	char *ret_orig;

	str = (char *)malloc(sizeof(char) * 150);
		MALLOC_CHECK(str);
	memcpy((void *)str, "Tempete de Boulettes Geantes\0", strlen("Tempete de Boulettes Geantes") + 1);
	printf("<-----ft_strchr----->\n");
	//-------------test 1 diff return ptr
	ret = ft_strchr(str, 'G');
	ret_orig = strchr(str, 'G');
	//printf("%s\n", ret);
	//printf("%s\n", ret_orig);

	if (!strcmp(ret, ret_orig))
	{
		TEST(1, "OK");
	}
	else
		TEST(1, "FALSE : Diff return ptr");

	//-------------test 2 char dont find
	ret = ft_strchr(str, 'z');
	ret_orig = strchr(str, 'z');


	if (!ret && !ret_orig)
	{
		TEST(2, "OK");
	}
	else
		TEST(2, "FALSE : char dont find bad diff");

	//------------test 3 stop when find \0
	memcpy((void *)str, "Tempete de Boulettes\0 Geantes\0", strlen("Tempete de Boulettes Geantes") + 2);
	ret = ft_strchr(str, 'G');
	ret_orig = strchr(str, 'G');

	if (!ret && !ret_orig)
	{
		TEST(3, "OK");
	}
	else
		TEST(3, "FALSE : stop when find \0");



	//------------test 4 0 in c == search first \0
	memcpy((void *)str, "Tempete de Boulettes Geantes\0", strlen("Tempete de Boulettes Geantes") + 1);
	ret = ft_strchr(str, 0);
	ret_orig = strchr(str, 0);

	if (ret == ret_orig)
	{
		TEST(4, "OK");
	}
	else
		TEST(4, "FALSE : if c == 0 return first \0");

    char    tab[10];

    strcpy(tab, "bonbons");
    if (tab != ft_strchr(tab, 'b'))
        printf("ERROR2");
    if (tab + 1 != ft_strchr(tab, 'o'))
        printf("ERROR3");
    if (tab + 6 != ft_strchr(tab, 's'))
        printf("ERROR4");
    if (tab + 7 != ft_strchr(tab, '\0'))
        printf("ERROR5");

		int q;
		q = 0xff00;
		printf("%d\n", '\0' | 0xff00);
		printf("%p\n", ft_strchr(tab, '\0' | 0xff00));
		printf("%p\n", tab +7);

	if (tab + 7 != ft_strchr(tab, '\200'))
        printf("ERROR6\n");
	if (tab + 7 != strchr(tab, '\200'))
        printf("ERROR6 ORIG\n");


    if (tab + 7 != ft_strchr(tab, '\0' | 0xff00))
        printf("ERROR7\n");

	if (NULL != ft_strchr(tab, 'a'))
        printf("ERROR8");
    if (tab + 2 != ft_strchr(tab, 'n' | 0xff00))
        printf("ERROR9");
    if (0 != memcmp(tab, "bonbons", 8))
        printf("ERROR10");


/*
		strcpy(tab, "bonbons");
    if (tab != strchr(tab, 'b'))
        printf("ERROR2");
    if (tab + 1 != strchr(tab, 'o'))
        printf("ERROR3");
    if (tab + 6 != strchr(tab, 's'))
        printf("ERROR4");
    if (tab + 7 != strchr(tab, '\0'))
        printf("ERROR5");

		int q;
		q = 0xff00;
		printf("%d\n", '\0' | 0xff00);

	if (tab + 7 != strchr(tab, '\200'))
        printf("ERROR6");

    if (tab + 7 != strchr(tab, '\0' | 0xff00))
        printf("ERROR7");
    
	if (NULL != strchr(tab, 'a'))
        printf("ERROR8");
    if (tab + 2 != strchr(tab, 'n' | 0xff00))
        printf("ERROR9");
    if (0 != memcmp(tab, "bonbons", 8))
        printf("ERROR10");
*/
	return (0);
}