/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadal-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 18:29:25 by lnadal-s          #+#    #+#             */
/*   Updated: 2019/08/05 22:21:51 by lnadal-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
char *ft_strstr(char *str, char *to_find);

int		main(void)
{
	printf("\n ---- TEST 0 ---- \n");
	printf("\n --ma fonction ---- \n");
	char str[] = "oui je n y suis pas";
	char to_find[] ="non";
	printf("%s\n", ft_strstr(str, to_find));
	char str1[] = "oui je n y suis pas ";
	char to_find1[] ="non";
	printf("\n -- fonction strstr ---- \n");
	printf("%s\n", strstr(str1, to_find1));
	printf("\n ---- TEST 1 ---- \n");
	printf("\n --ma fonction ---- \n");
	char str2[] ="je tes42 \n merce";
	char to_find2[] ="\0";
	printf("%s\n", ft_strstr(str2, to_find2));
	char str2b[] ="je tes42 \n merce";
	char to_find2b[] ="\0";
	printf("\n -- fonction strstr ---- \n");
	printf("%s\n", strstr(str2b, to_find2b));
	printf("\n ---- TEST 2 ---- \n");
	printf("\n --ma fonction ---- \n");
	char str3[] ="\1test 42";
	char to_find3[] ="test";
	printf("%s\n", ft_strstr(str3, to_find3));
	printf("\n -- fonction strstr ---- \n");
	char str3b[] ="\1test 42";
	char to_find3b[] ="test";
	printf("%s\n", strstr(str3b, to_find3b));
	printf("\n ---- TEST 3 ---- \n");
	char str4[] ="test 42";
	char to_find4[] ="\0";
	printf("%s\n", ft_strstr(str4, to_find4));
	printf("\n -- fonction strstr ---- \n");
	char str4b[] ="test 42";
	char to_find4b[] ="\0";
	printf("%s\n", strstr(str4b, to_find4b));
	printf("\n ---- TEST 4 ---- \n");
}
