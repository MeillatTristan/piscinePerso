/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadal-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 14:29:43 by lnadal-s          #+#    #+#             */
/*   Updated: 2019/08/08 17:50:23 by tmeillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int ft_strcmp(char *s1, char *s2);

int		main(void)
{
	char t[] = "tes*t1";
	char b[] = "te-st1re";
	printf("%d \n", strcmp(t, b));
	printf("%d \n", ft_strcmp(t, b));
	char s[] = "36";
	char v[] = "36";
	printf("%d \n", strcmp(s, v));
	printf("%d \n", ft_strcmp(s, v));
	char q[] = "\0";
	char o[] = "\200";
	printf("%d \n", strcmp(q, o));
	printf("%d \n", ft_strcmp(q, o));
	char y[] = "/*-+";
	char x[] = "/*-+";
	printf("%d \n", strcmp(y, x));
	printf("%d \n", ft_strcmp(y, x));
	return (0);
}
