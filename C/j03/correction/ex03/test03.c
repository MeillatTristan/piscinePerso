/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadal-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 15:32:24 by lnadal-s          #+#    #+#             */
/*   Updated: 2019/08/05 23:07:55 by lnadal-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char    *ft_strncat(char *dest, char *src, unsigned int nb);

int		main(void)
{
	printf("\n ----- TEST 0 ----- \n");
	printf("\n ----- ma fonction  ----- \n");
	char src[] = "mdr";
	char dst[] = "loilol";
	dst[3] = 0;
	dst[4] = 0;
	dst[5] = 0;
	printf("%s", ft_strncat(dst, src, 2));
	printf("\n ----- strncat  ----- \n");
	char src1[] = "mdr";
	char dst1[] = "loilol";
	dst1[3] = 0;
	dst1[4] = 0;
	dst1[5] = 0;
	printf("%s", strncat(dst1, src1, 2));
	printf("\n ----- TEST 1 ----- \n");
	printf("\n ----- ma fonction  ----- \n");
	char srcb[] = "mdr";
	char dstb[] = "loilol";
	printf("%s", ft_strncat(dstb, srcb, 2));
	printf("\n ----- strncat  ----- \n");
	//char src2[] = "mdr";
	//char dst2[] = "loilol";
	//printf("%s", strncat(dst2, src2, 2));
	printf("\n ----- TEST 2 ----- \n");
	printf("\n ----- ma fonction  ----- \n");
	char srcbb[] = "mdrlolilol";
	char dstbb[] = "loilol";
	printf("%s", ft_strncat(dstbb, srcbb, 0));
	printf("\n ----- strncat  ----- \n");
	char src3[] = "mdrlolilol";
	char dst3[] = "loilol";
	printf("%s", strncat(dst3, src3, 0));
	printf("\n ----- TEST 3 ----- \n");
	printf("\n ----- TEST 4 ----- \n");
}
