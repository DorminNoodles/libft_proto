/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_proto.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/03 19:50:38 by lchety            #+#    #+#             */
/*   Updated: 2016/10/03 19:50:38 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*Mes petits test à moi*/
void sonic_boom(void);
void pointers_aids();

/*First_Part*/
void test_ft_memset(void);
void test_ft_bzero(void);
void test_ft_strlen(void);
void test_ft_memccpy(void);
void test_ft_memcpy(void);
void test_ft_atoi(void);
void test_ft_memmove(void);
void test_ft_memchr(void);
void test_ft_memcmp(void);
void test_ft_strdup(void);
void test_ft_strcpy(void);
void test_ft_strncpy(void);
void test_ft_strcat(void);
void test_ft_strncat(void);
void test_ft_strlcat(void);
void test_ft_strchr(void);
void test_ft_strrchr(void);
void test_ft_strstr(void);
void test_ft_strnstr(void);
void test_ft_strcmp(void);
void test_ft_strncmp(void);
void test_ft_isalpha(void);
void test_ft_isdigit(void);
void test_ft_isalnum(void);
void test_ft_isascii(void);
void test_ft_isprint(void);
void test_ft_toupper(void);
void test_ft_tolower(void);




/*Secondary_Part*/
void test_ft_memalloc(void);
void test_ft_memdel(void);
void test_ft_strnew(void);
void test_ft_strdel(void);
void test_ft_strclr(void);
void test_ft_striter(void);
void test_ft_striteri(void);
void test_ft_strmap(void);
void test_ft_strmapi(void);
void test_ft_strequ(void);
void test_ft_strnequ(void);
void test_ft_strsub(void);
void test_ft_strjoin(void);
void test_ft_strtrim(void);
void test_ft_strsplit(void);
void test_ft_itoa(void);
void test_ft_putchar(void);
void test_ft_putstr(void);
void test_ft_putendl(void);
void test_ft_putnbr(void);
void test_ft_putchar_fd(void);
void test_ft_putstr_fd(void);
void test_ft_putendl_fd(void);
void test_ft_putnbr_fd(void);


/*Bonus*/
void test_ft_lstnew(void);
void test_ft_lstdelone(void);
void test_ft_lstdel(void);
void test_ft_lstadd(void);
void test_ft_lstiter(void);
void test_ft_lstmap(void);




int main(void)
{
	/*First_Part*/
	//test_ft_strlen();
	//test_ft_atoi();
	//test_ft_memset();
	//test_ft_bzero();
	//test_ft_memccpy();
	//test_ft_memcpy();
	//test_ft_memmove();
	//test_ft_memchr();
	//test_ft_memcmp();
	//test_ft_strdup();
	//test_ft_strcpy();
	//test_ft_strncpy();
	//test_ft_strcat();
	//test_ft_strncat();
	//test_ft_strlcat();
	//test_ft_strchr();
	//test_ft_strrchr();
	//test_ft_strstr();
	//test_ft_strnstr();
	//test_ft_strcmp();
	//test_ft_strncmp();
	//test_ft_isalpha();
	//test_ft_isdigit();
	//test_ft_isalnum();
	//test_ft_isascii();
	//test_ft_isprint();
	//test_ft_toupper();
	//test_ft_tolower();


	/*Secondary_Part*/
	//test_ft_memalloc();
	//test_ft_memdel();
	//test_ft_strnew();
	//test_ft_strdel();
	//test_ft_strclr();
	//test_ft_striter();
	//test_ft_striteri();
	//test_ft_strmap();
	//test_ft_strmapi();
	//test_ft_strequ();
	//test_ft_strnequ();
	//test_ft_strsub();
	//test_ft_strjoin();
	//test_ft_strtrim();
	//test_ft_strsplit();
	//test_ft_itoa();
	//test_ft_putchar();
	//test_ft_putstr();
	//test_ft_putendl();
	//test_ft_putnbr();
	//test_ft_putchar_fd();
	//test_ft_putstr_fd();
	//test_ft_putendl_fd();
	//test_ft_putnbr_fd();


	/*Bonus*/
	//test_ft_lstnew();
	//test_ft_lstdelone();
	//test_ft_lstdel();
	//test_ft_lstadd();
	//test_ft_lstiter();
	//test_ft_lstmap();

	//sonic_boom();
	//pointers_aids();

	return (0);
}

void sonic_boom(void)
{
	int i = 5;
	int *p1 = &i; //bizzare

	*p1 = (int)&i;

	printf("%d\n", i);
	printf("%d\n", i);




	/*
	int (*s)[100] = malloc( sizeof( int[100] ) );
	printf( "%u byte pointer to %u bytes of size %u elements\n",
	sizeof s, sizeof *s, sizeof **s );
	*/
}

void pointers_aids()
{
	int i = 6;
	int j = 2;
	int k = 18;
	int *p1 = NULL;
	int *p2 = NULL;
	int **p3 = NULL;
	int **p4 = NULL;
	int ***p5 = NULL;
	int ****p6 = NULL;

	p1 = &i;

	printf("%d\n", *p1);

	p3 = &p2;
	*p3 = &k;
	printf("%d\n", **p3);

	p5 = &p4;
	p4 = &p1;
	**p5 = &j;
	printf("%d\n", ***p5);
	printf("%d\n", *p1);

	p6 = &p5;
	*p6 = &p3;
	**p6 = &p2;
	p1 = &k;
	p2 = p1;
	printf("%d\n", ****p6);
}

void test_ft_strlen(void)
{
	char *str1 = "quand c'est bon c'est bonduelle";
	char *str2 = "efsedfg54634532`\"2(5-4'(è-54('-è456z(4d2fv1rt'(";	
	char *str3 = "dzdfqsdf99999ààà)))		xfe `\n]@}\r";
	size_t i;

	i = 0;

	i = strlen(str1);
	printf("strlen : %d\n", (int)i);
	i = ft_strlen(str1);
	printf("ft_strlen : %d\n", (int)i);

	i = strlen(str2);
	printf("strlen : %d\n", (int)i);
	i = ft_strlen(str2);
	printf("ft_strlen : %d\n", (int)i);

	i = strlen(str3);
	printf("strlen : %d\n", (int)i);
	i = ft_strlen(str3);
	printf("ft_strlen : %d\n", (int)i);

}

void test_ft_memalloc(void)
{
	int *ptr;
	int i;

	i = 0;

	ptr = (int *)ft_memalloc(sizeof(int) * 800);
	if(ptr == NULL)
		return;
	//printf("memalloc sizeof : %d", _msize(*ptr));
	
	while(i < 800)
	{
		*(ptr + i) = i;
		printf("%d\n", *(ptr + i));
		i++;
	}
}

void test_ft_memdel(void)
{
	int *ptr;
	int i;

	i = 0;
	ptr = ft_memalloc(sizeof(int) * 800);
	if (ptr == NULL)
		return;
	
	while (i++ < 800)
	{
		*(ptr + i) = i;
	}

	ft_memdel((void *)&ptr);

	//**pptr = 2;
	//*pptr = *pptr + (sizeof(int) * 4);
	//printf("%d\n", **pptr);
	//printf("%d\n", *ptr);
	//**pptr = 1547;
	//ft_memdel((void *)&ptr);
	//printf("test == %d\n", &ptr);
	//test(&ptr);
}

void test_ft_strnew(void)
{
	int i;
	char *str;
	size_t str_size = 1200000000;

	i = 0;
	str = NULL;

	str = ft_strnew(str_size);

	while (i < 1200000000)
	{
		*(str + i) = 'c';
		i++;
	}

	//printf("%s", str);
}

void test_ft_atoi(void)
{
	char *nstr = "48";
	char *nstr2 = "       +++48";
	char *nstr3 = "    ++484228     eerrf";
	char *nstr4 = "    -+484228     eerrf";
	char *nstr5 = "    -484228     eerrf";
	char *nstr6 = "    +484228     eerrf";
	char *nstr7 = "	   	#484228  ewregdh";
	int x;

	x = 0;
	
	x = atoi(nstr);
	printf("atoi : %d\n",x);	
	x = ft_atoi(nstr);
	printf("ft_atoi : %d\n",x);

	x = atoi(nstr2);
	printf("atoi : %d\n",x);	
	x = ft_atoi(nstr2);
	printf("ft_atoi : %d\n",x);

	x = atoi(nstr3);
	printf("atoi : %d\n",x);	
	x = ft_atoi(nstr3);
	printf("ft_atoi : %d\n",x);
	
	x = atoi(nstr4);
	printf("atoi : %d\n",x);	
	x = ft_atoi(nstr4);
	printf("ft_atoi : %d\n",x);
	
	x = atoi(nstr5);
	printf("atoi : %d\n",x);	
	x = ft_atoi(nstr5);
	printf("ft_atoi : %d\n",x);

	x = atoi(nstr6);
	printf("atoi : %d\n",x);	
	x = ft_atoi(nstr6);
	printf("ft_atoi : %d\n",x);
	
}

void test_ft_memset(void)
{
	char *str;

	size_t n = 15;
	int c = 'c';
	str = ft_strnew(50);
	str = (char *)ft_memset((void *)str, c, n);
	printf("%s", str);
}

void test_ft_bzero(void)
{
	char *ptr;

	ptr = (char *)ft_memalloc(50);

	ft_bzero((void *)ptr, 10);
}

void test_ft_memccpy(void)
{
	char *str1;
	char *str2;

	str1 = (char *)ft_strnew(200);
	str2 = (char *)ft_strnew(200);

	str1[0] = 'B';
	str1[1] = 'B';
	str1[2] = 'B';
	str1[3] = 'B';
	str1[4] = 'B';
	str1[5] = 'B';
	str1[6] = 'B';
	str1[7] = 'B';

	//printf("%s\n", str2);
	ft_memccpy((void *)str2, (void *)str1, 'n', 5);
	printf("%s\n", str1);
	printf("%s\n", str2);
}

void test_ft_memcpy(void)
{
	char *str1;
	char *str2;

	str1 = ft_memalloc(300);
	str2 = str1;
	str2 += 14; 

	printf("Test_ft_memcpy\n\r\r");
	
	ft_memcpy((void *)str2, "0000000000000000000000000000000000", 100);
	ft_memcpy((void *)str1, "Hello wayne's world", 70);

	printf("%s\n", str1);

	printf("%d\n", (int)ft_strlen(str2));
	ft_memcpy((void *)str2, (void *)str1, ft_strlen(str2));

	printf("%s\n", str1);
	printf("%s\n", str2);
}

void test_ft_memmove(void)
{
	char str1[100];
	char *str2;

	ft_memset((void *)str1, '\0', 50);
	str2 = str1;
	str2 += 10;
	ft_memcpy((void *)str1, "Hello Wayne's World", 19);

	printf("%s\n", str1);
	(void)ft_memmove((void *)str2, (void *)str1, 19);

	printf("%s\n", str2);
}

void test_ft_memchr(void)
{
	char *str1;
	char *res; 
	char c;

	c = 'b';
	str1 = ft_strnew(200);
	ft_memcpy(str1, "GalakZ  subzero death stranding", ft_strlen("GalakZ  subzero death stranding"));

	printf("%s\n", str1);

	res = ft_memchr(str1, (int)c, 18);
	printf("%s\n", res);
}

void test_ft_memcmp(void)
{
	char *str1;
	char *str2;

	str1 = ft_strnew(100);
	str2 = ft_strnew(100);

	ft_memcpy(str1, "GalakZ  subzero death stranOing", ft_strlen("GalakZ  subzero death stranding"));
	ft_memcpy(str2, "GalakZ  subzero death stranding", ft_strlen("GalakZ  subzero death stranOing"));

	printf("%d\n",ft_memcmp(str1, str2, ft_strlen("GalakZ  subzero death stranding")));

	
	printf("%d\n",memcmp(str1, str2, ft_strlen("GalakZ  subzero death stranding")));
}

void test_ft_strdup(void)
{
	char *str1;
	char *str2;

	str1 = ft_strnew(ft_strlen("Galiminus radicus"));
	ft_memcpy(str1, "Galiminus radicus", ft_strlen("Galiminus radicus"));
	str2 = ft_strdup(str1);
	printf("%s", str2);
}

void test_ft_strcpy(void)
{
	char *str1;
	char *str2;

	str2 = ft_strnew(200);
	str1 = ft_strnew(ft_strlen("Galiminus radicus"));
	ft_memcpy((void *)str1, "Galiminus radicus", ft_strlen("Galiminus radicus"));
	ft_memcpy((void *)str2, "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", 200);

	str2 = ft_strcpy(str2, str1);

	printf("%s\n", str2);
}

void test_ft_strncpy(void)
{
	char *str1;
	char *str2;

	str1 = ft_strnew(ft_strlen("Galiminus radicus"));
	str2 = ft_strnew(200);

	ft_memcpy((void *)str1, "Galiminus radicus", ft_strlen("Galiminus radicus"));
	ft_memcpy((void *)str2, "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", 200);

	str2 = ft_strncpy(str2, str1, 2);

	printf("%s\n", str2);
	//printf("%s\n", (str2 + 17));
	//printf("%c\n", *(str2 + 18));
	//printf("%c\n", *(str2 + 19));
	//printf("%c\n", *(str2 + 20));
}

void test_ft_strcat(void)
{
	char *str1;
	char *str2;

	str1 = ft_strnew(200);
	str2 = ft_strnew(100);

	ft_memcpy((void *)str1, "Galiminus radicus", ft_strlen("Galiminus radicus"));
	ft_memcpy((void *)str2, "ZAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB", 200);

	str1 = ft_strcat(str1, str2);
	printf("%s", str1);
}

void test_ft_strncat(void)
{
	char *str1;
	char *str2;

	str1 = ft_strnew(200);
	str2 = ft_strnew(100);

	ft_memcpy((void *)str1, "Galiminus radicus", ft_strlen("Galiminus radicus"));
	ft_memcpy((void *)str2, "ZAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB", 100);

	str1 = ft_strncat(str1, str2, 50);

	printf("%s\n", str1);

}

void test_ft_strlcat(void)
{
	char *str1;
	char *str2;
	char *str3;
	int i;

	i = 0;
	str1 = ft_strnew(200);
	str2 = ft_strnew(100);
	str3 = ft_strnew(200);

	ft_memcpy((void *)str1, "Galiminus radicus", ft_strlen("Galiminus radicus"));
	ft_memcpy((void *)str2, "ZAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB", 100);
	ft_memcpy((void *)str3, "Galiminus radicus", ft_strlen("Galiminus radicus"));
	
	i = ft_strlcat(str1, str2, 52);
	printf("%s\n", str1);
	printf("%d\n", i);

	i = strlcat(str3, str2, 52);
	/* strlcat compte toutes les lettres et renvoi ce nombre (des 2 string) et il coupe
	la derniere lettre pour le \0 alors on doit lui donner un size + 1, un strlen +1...*/
	printf("%s\n", str3);
	printf("%d\n", i);
}

void test_ft_strchr(void)
{
	char *str;
	char *ptr;
	char c = 'f';
	size_t size;

	size = ft_strlen("Bonsoir le monde du fromage");
	str = ft_strnew(size);

	ft_memcpy(str, "Bonsoir le monde du fromage", size);
	ptr = ft_strchr(str, c);

	if(ptr)
		printf("%s\n", ptr);
}

void test_ft_strrchr(void)
{
	char *str;
	char *ptr;
	char c = 'z';
	size_t size;

	size = ft_strlen("Bonsoir le monde du fromage");
	str = ft_strnew(size);

	ft_memcpy(str, "Bonsoir le monde du fromage", size);
	ptr = ft_strrchr(str, c);

	if(ptr)
		printf("%s\n", ptr);

}

void test_ft_strstr(void)
{
	char *str;
	char *needle;

	str = ft_strnew(100);
	ft_memcpy(str, "Kodak est mort", ft_strlen("Kodak est mort"));

	needle = ft_strnew(40);
	ft_memcpy(needle, "oda", ft_strlen("oda"));

	str = ft_strstr(str, needle);

	if(str)
		printf("%s\n", str);

}

void test_ft_strnstr(void)
{
	char *str;
	char *needle;

	str = ft_strnew(100);
	ft_memcpy(str, "Kodak est mort", ft_strlen("Kodak est mort"));

	needle = ft_strnew(40);
	ft_memcpy(needle, "st", ft_strlen("st"));

	str = ft_strnstr(str, needle, 6);

	if(str)
		printf("%s\n", str);
}

void test_ft_strcmp(void)
{
	char *str1;
	char *str2;
	char *src = "Maurice chausson mange des chaussons au pommes !";
	char *src2 = "Maurice chausson mange des chaussons au tommes !";
	int ret = 0;

	ft_memcpy(str1 = ft_strnew(ft_strlen(src)), src, ft_strlen(src));
	ft_memcpy(str2 = ft_strnew(ft_strlen(src2)), src2, ft_strlen(src2));

	ret = ft_strcmp(str1, str2);
	printf("%d\n", ret);
	ret = strcmp(str1, str2);
	printf("%d\n", ret);
}

void test_ft_strncmp(void)
{
	char *str1;
	char *str2;
	char *src = "Maurice chausson mange des chaussons au pommes !";
	char *src2 = "Maurice chausson fange des chaussons au tommes !";
	int ret = 0;

	ft_memcpy(str1 = ft_strnew(ft_strlen(src)), src, ft_strlen(src));
	ft_memcpy(str2 = ft_strnew(ft_strlen(src2)), src2, ft_strlen(src2));

	ret = ft_strncmp(str1, str2, 30);
	printf("%d\n", ret);
	ret = strncmp(str1, str2, 30);
	printf("%d\n", ret);
}

void test_ft_isalpha(void)
{
	char c = '(';

	printf("%d\n", ft_isalpha((int)c));
}

void test_ft_isdigit(void)
{
	char c = '4';

	printf("%d\n", ft_isdigit((int)c));
}

void test_ft_isalnum(void)
{
	char c = '4';
	char d = 'a';
	char e = 'R';
	char f = '_';

	printf("%d\n", ft_isalnum((int)c));
	printf("%d\n", ft_isalnum((int)d));
	printf("%d\n", ft_isalnum((int)e));
	printf("%d\n", ft_isalnum((int)f));
}

void test_ft_isascii(void)
{
	char c = '4';
	char d = 'a';
	char e = 'R';
	char f = '_';

	printf("-----ft_isascii-----\n");

	printf("%d\n", ft_isascii((int)c));
	printf("%d\n", ft_isascii((int)d));
	printf("%d\n", ft_isascii((int)e));
	printf("%d\n", ft_isascii((int)f));
}

void test_ft_isprint(void)
{
	char c = '4';
	char d = 'a';
	char e = 'R';
	char f = '_';

	printf("-----ft_isprint-----\n");

	printf("%d\n", ft_isprint((int)c));
	printf("%d\n", ft_isprint((int)e));
	printf("%d\n", ft_isprint((int)f));
	printf("%d\n", ft_isprint((int)d));
}

void test_ft_toupper(void)
{
	char c = 'a';
	char d = '4';

	printf("-----ft_toupper-----\n");

	printf("%c", ft_toupper(c));
	printf("%c", ft_toupper(d));
}

void test_ft_tolower(void)
{
	char c = 'A';
	char d = '4';

	printf("-----ft_tolower-----\n");

	printf("%c", ft_tolower(c));
	printf("%c", ft_tolower(d));
}

/*------------PART 2------------*/

void test_ft_strdel(void)
{
	char *str;
	int i;

	i = 0;
	str = ft_strnew(40);

	while (i < 40)
	{
		*(str + i) = 'c';
		i++;
	}
	printf("%c", *(str + 1));

	ft_strdel(&str);
}

void test_ft_strclr(void)
{
	char *str;

	str = ft_strnew(100);


	str[0] = 'c';
	str[1] = 'a';
	str[2] = 'u';
	str[3] = 'c';
	str[4] = 'h';
	str[5] = 'e';
	str[6] = 'm'; 
	str[7] = 'a';
	str[8] = 'r';
	str[9] = 'd';

	printf("no cleared : %s\n", str);

	ft_strclr(str);

	printf("cleared : %s\n", str);
}

void test_pointer_function(char *c)
{
	*c = 'O';
}

void test_ft_striter(void)
{
	char *str;
	void(*pointer_f)(char *);

	pointer_f = test_pointer_function;
	str = ft_strnew(100);
	ft_memcpy(str, "Crepe au nutella miam", ft_strlen("Crepe au nutella miam"));

	ft_striter(str, pointer_f);

	printf("%s", str);
}

void test_pointer_function2(unsigned int i, char *c)
{
	c[i] = 'B';
}

void test_ft_striteri(void)
{
	char *str;
	void(*pointer_f)(unsigned int, char *);

	pointer_f = test_pointer_function2;
	str = ft_strnew(100);

	ft_memcpy(str, "Bloodborne le platine, trop facile ;)", ft_strlen("Bloodborne le platine, trop facile ;"));

	ft_striteri(str, pointer_f);

	printf("%s", str);
}

char test_pointer_strmap(char c)
{
	return (c += 2);
}

void test_ft_strmap(void)
{
	char *str;
	char *ret;
	char (*pointer_f)(char);

	pointer_f = test_pointer_strmap;
	str = ft_strnew(100);
	ft_memcpy(str, "Sun sun... Icare sarcophage", ft_strlen("Sun sun... Icare sarcophage"));

	ret = ft_strmap(str, pointer_f);

	if(ret)
		printf("%s", ret);
}

char test_pointer_strmapi(unsigned int i, char c)
{
	i = i+1;
	return (c = 'R');
}

void test_ft_strmapi(void)
{
	char *str;
	char *ret;
	char (*pointer_f)(unsigned int, char);

	pointer_f = test_pointer_strmapi;
	str = ft_strnew(100);
	ft_memcpy(str, "Sun sun... Icare sarcophage", ft_strlen("Sun sun... Icare sarcophage"));

	ret = ft_strmapi(str, pointer_f);

	if(ret)
		printf("%s", ret);
}

void test_ft_strequ(void)
{
	char *str1;
	char *str2;

	str1 = ft_strnew(100);
	str2 = ft_strnew(100);

	ft_memcpy(str1, "Sun sun... Icart sarcophage", ft_strlen("Sun sun... Icare sarcophage"));
	ft_memcpy(str2, "Sun sun... Icare sarcophage", ft_strlen("Sun sun... Icare sarcophage"));

	printf("%d\n", ft_strequ(str1, str2));
	
}

void test_ft_strnequ(void)
{
	char *str1;
	char *str2;

	str1 = ft_strnew(100);
	str2 = ft_strnew(100);

	ft_memcpy(str1, "Sun sun... Icare sarcophage", ft_strlen("Sun sun... Icare sarcophage"));
	ft_memcpy(str2, "Sun sun... Ivare sarcophage", ft_strlen("Sun sun... Icare sarcophage"));

	printf("%d\n", ft_strnequ(str1, str2, 20));	
}

void test_ft_strsub(void)
{
	char *str1;

	str1 = ft_strnew(100);
	ft_memcpy(str1, "Sun sun... Icare sarcophage", ft_strlen("Sun sun... Icare sarcophage"));
	printf("%s\n", ft_strsub(str1, 5, 17));	
}

void test_ft_strjoin(void)
{
	char *str1;
	char *str2;

	str1 = ft_strnew(100);
	str2 = ft_strnew(100);

	ft_memcpy(str1, "Mes couilles mickey", ft_strlen("Mes couilles mickey"));
	ft_memcpy(str2, " ma queue donald", ft_strlen(" ma queue donald"));

	printf("%s\n", ft_strjoin(str1, str2));	
}

void test_ft_strtrim(void)
{
	char *str1;
	char *str_exemple = "    \t 		start	SUn boom de la merde 	   hahahaha    \n test test end \n \t       ";
	char *str2;

	str1 = ft_strnew(200);
	str2 = ft_strnew(200);

	//ft_memcpy(str1, "Mes couilles mickey", ft_strlen("Mes couilles mickey"));
	ft_memcpy(str1, str_exemple, ft_strlen(str_exemple));
	ft_memcpy(str2, "    \t    ", 9);

	printf("%s\n", ft_strtrim(str1));
	printf("%s\n", ft_strtrim(str2));
}

void test_ft_strsplit(void)
{
	char *str1;
	char **tab_w;
	char c;
	
	c = '*';
	str1 = ft_strnew(100);
	ft_memcpy(str1, "*bordel******de***merde*heu***j'ai**mal*au*crane*", ft_strlen("*bordel******de***merde*heu***j'ai**mal*au*crane*"));
	
	tab_w = ft_strsplit(str1, c);

	while(*tab_w != NULL)
	{
		printf("%s", *tab_w);
		tab_w++;
	}
}

void test_ft_itoa(void)
{
	char *str;
	str = ft_itoa(-2147483647);
	printf("%s\n", str);
}

void test_ft_putchar(void)
{
	char c;

	c = 'M';

	ft_putchar(c);
}

void test_ft_putstr(void)
{
	char *str;

	str = ft_strnew(120);
	ft_memcpy(str, "HAAAAAAAAAAAAYYYYYYYYYYYYAAAAAAAAAAAAAAAAAAAO", ft_strlen("HAAAAAAAAAAAAYYYYYYYYYYYYAAAAAAAAAAAAAAAAAAAO"));
	ft_putstr(str);
}

void test_ft_putendl(void)
{
	char *str;

	str = ft_strnew(120);
	ft_memcpy(str, "HAAAAAAAAAAAAYYYYYYYYYYYYAAAAAAAAAAAAAAAAAAAO", ft_strlen("HAAAAAAAAAAAAYYYYYYYYYYYYAAAAAAAAAAAAAAAAAAAO"));
	ft_putendl(str);
}

void test_ft_putnbr(void)
{
	ft_putnbr(424242);
	printf("\n");
}

void test_ft_putchar_fd(void)
{
	int fichier;

	fichier = open("text.txt", O_CREAT | O_RDWR, S_IRUSR);

	ft_putchar_fd('M', fichier);
	close(fichier);
}

void test_ft_putstr_fd(void)
{
	int fichier;

	fichier = open("text2.txt", O_CREAT | O_RDWR, S_IRUSR);

	ft_putstr_fd("NUGGGGGETTTTTTTS", fichier);
	close(fichier);
}

void test_ft_putendl_fd(void)
{
	int fichier;

	fichier = open("text3.txt", O_CREAT | O_RDWR, S_IRUSR);

	ft_putendl_fd("NUGGGGGETTTTTTTS", fichier);
	close(fichier);
}

void test_ft_putnbr_fd(void)
{
	int fichier;

	fichier = open("text4.txt", O_CREAT | O_RDWR, S_IRUSR);

	ft_putnbr_fd(25472, fichier);
	close(fichier);
}

void test_ft_lstnew()
{
	t_list *link;

	link = ft_lstnew("va te faire ", ft_strlen("va te faire "));

	printf("%d\n", (int)sizeof("va te faire"));
	printf("%d\n", (int)strlen("va te faire "));

	printf("%s", link->content);

}

void del_link_ft_lstdelone(void * koko, size_t size)
{
	printf("%s\n", (char *)koko);
	//printf("%d\n", size);

	free(koko);
	//printf("%s\n", (char *)koko);
}

void test_ft_lstdelone(void)
{
	void(*pointer_f)(void *, size_t);
	t_list *link;

	link = ft_lstnew("va te faire ", ft_strlen("va te faire "));

	//printf("%s", link->content);

	pointer_f = del_link_ft_lstdelone;

	ft_lstdelone(&link, pointer_f);

	if(link == NULL)
		printf("test\n");
}

void test_ft_lstdel(void)
{
	void(*pointer_f)(void *, size_t);
	t_list *link1;
	t_list *link2;
	t_list *link3;
	t_list *link4;

	pointer_f = del_link_ft_lstdelone;
	link4 = ft_lstnew("Un Anneau pour les gouverner tous", ft_strlen("Un Anneau pour les gouverner tous"));
	link3 = ft_lstnew("Un Anneau pour les trouver", ft_strlen("Un Anneau pour les trouver"));
	link2 = ft_lstnew("Un Anneau pour les amener tous,", ft_strlen("Un Anneau pour les amener tous,"));
	link1 = ft_lstnew("Et dans les ténèbres les lier", ft_strlen("Et dans les ténèbres les lier"));

	link1->next = link2;
	link2->next = link3;
	link3->next = link4;

	ft_lstdel(&link1, pointer_f);

	if(link1 == NULL)
		printf("Lst Delete !\n");
}

void test_ft_lstadd(void)
{
	t_list *link1;
	t_list *new_first;

	link1 = ft_lstnew("link1 ", ft_strlen("link1 "));
	link1->next = ft_lstnew("link2 ", ft_strlen("link2 "));
	new_first = ft_lstnew("new_first ", ft_strlen("new_first "));

	//link1->next = link2;
	ft_lstadd(&link1, new_first);

	printf("%s %s %s", link1->content, link1->next->content, link1->next->next->content);
}

void ft_lstiter_pointer(t_list *elem)
{
	elem->content = ft_strnew(100);
	elem->content = (char *)memcpy(elem->content, "Morpheus", ft_strlen("Morpheus"));
}

void test_ft_lstiter(void)
{
	t_list *link1;
	t_list *link2;
	void (*pointer_f)(t_list *elem);

	pointer_f = ft_lstiter_pointer;
	link1 = ft_lstnew("link1 ", ft_strlen("link1 "));
	link1->next = ft_lstnew("link2 ", ft_strlen("link2 "));
	link1->next->next = ft_lstnew("link3 ", ft_strlen("link3 "));

	ft_lstiter(link1, pointer_f);
	printf("%s %s %s", link1->content, link1->next->content, link1->next->next->content);
}

t_list *ft_lstmap_pointer(t_list *elem)
{
	elem->content = ft_strnew(100);
	elem->content = (char *)memcpy(elem->content, "Morpheus", ft_strlen("Morpheus"));

	return (elem);
}

void test_ft_lstmap(void)
{
	t_list *link1;
	t_list *link2;
	t_list *(*pointer_f)(t_list *elem);

	pointer_f = ft_lstmap_pointer;
	link1 = ft_lstnew("link1 ", ft_strlen("link1 "));
	link1->next = ft_lstnew("link2 ", ft_strlen("link2 "));
	link1->next->next = ft_lstnew("link3 ", ft_strlen("link3 "));

	link2 = ft_lstmap(link1, pointer_f);
	printf("%s %s %s", link1->content, link1->next->content, link1->next->next->content);
	printf("%s %s %s", link2->content, link2->next->content, link2->next->next->content);
}
