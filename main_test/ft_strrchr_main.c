/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 19:06:44 by lchety            #+#    #+#             */
/*   Updated: 2016/11/30 22:03:28 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libido.h"

int main(void)
{
	char *str;
	char *ret;
	char *ret_orig;

	str = (char *)malloc(sizeof(char)* 100);
	printf("<-----ft_strrchr----->\n");
	//------------------ test 1
	memcpy(str, "----------------\0", strlen("----------------") + 1);
	ret = ft_strrchr(str, '-');
	ret_orig = ft_strrchr(str, '-');
	
	if (ret == ret_orig)
	{
		TEST(1, "OK");
	}
	else
		TEST(1, "FALSE : Bad bad bad badaboum");
	
	//---------------- test 2 str null
	ret = ft_strrchr("", 'a');
	ret_orig = strrchr("", 'a');

	if (ret == ret_orig)
	{
		TEST(2, "OK");
	}
	else
		TEST(2, "FALSE : Null str prob");
	
	//---------------- test 3 c == null
	memcpy(str, "aaa\0", strlen("aaa") + 1);
	ret = ft_strrchr(str, 0);
	ret_orig = strrchr(str, 0);

	if (ret == ret_orig)
	{
		TEST(3, "OK");
	}
	else
		TEST(3, "FALSE : Null str prob");

	//---------------- test 4 c == null str empty
	str = (char *)malloc(sizeof(char)* 100);
	memcpy(str, "", strlen(""));
	ret = ft_strrchr(str, 0);
	ret_orig = strrchr(str, 0);
	
	if (ret == ret_orig)
	{
		TEST(4, "OK");
	}
	else
		TEST(4, "FALSE : Null str prob");

	//-------------- test 5
	char    tab[10];
		
	    strcpy(tab, "Bonbons");
    if (tab + 3 != ft_strrchr(tab, 'b'))
        printf("ERROR1");
    if (tab + 4 != ft_strrchr(tab, 'o'))
        printf("ERROR2");
    if (tab + 6 != ft_strrchr(tab, 's'))
        printf("ERROR3");
    if (tab + 7 != ft_strrchr(tab, '\0'))
        printf("ERROR4\n");

		printf("%s\n", tab + 7);
		printf("%s\n", ft_strrchr(tab, '\0'));
		printf("%s\n", strrchr(tab, '\0'));

		printf("%s\n", tab + 7);
		printf("%s\n", ft_strrchr(tab, '\0' | 0xff00));
		printf("%s\n", strrchr(tab, '\0' | 0xff00));

    if (tab + 7 != ft_strrchr(tab, '\0' | 0xff00))
        printf("ERROR5\n");
    if (NULL != ft_strrchr(tab, 'a'))
        printf("ERROR6");
    if (tab + 5 != ft_strrchr(tab, 'n' | 0xff00))
        printf("ERROR7");
    if (tab != ft_strrchr(tab, 'B'))
        printf("ERROR8");
    if (0 != memcmp(tab, "Bonbons", 8))
        printf("ERROR9");

	return (0);
}