/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadal-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 14:57:32 by lnadal-s          #+#    #+#             */
/*   Updated: 2019/08/08 18:56:19 by tmeillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int     ft_strncmp(char *s1, char *s2, unsigned int n);
int     main(void)
{
	char t[] = "test2";
	char b[] = "test1re";
	printf("%d \n", strncmp(t, b, 5));
	printf("%d \n", ft_strncmp(t, b, 5));
	char s[] = "3#1236";
	char v[] = "3asd6\21";
	printf("%d \n", strncmp(s, v, 6));
	printf("%d \n", ft_strncmp(s, v, 6));
	char q[] = "te\245sdes";
	char o[] = "tes\244";
	printf("%d \n", strncmp(q, o, 5));
	printf("%d \n", ft_strncmp(q, o, 5));
	char y[] = "/*-+";
	char x[] = "/*0-+";
	printf("%d \n", strncmp(y, x, 4));
	printf("%d \n", ft_strncmp(y, x, 4));
	return (0);
}
