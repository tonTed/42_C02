/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 21:25:53 by tonted            #+#    #+#             */
/*   Updated: 2021/02/15 13:36:29 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Reproduire à l’identique le fonctionnement de la fonction strlcpy (man strlcpy).
*/

#include <string.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	int len_src;
	int len_dest;

	i = 0;
	len_src = ft_strlen(src);
	len_dest = ft_strlen(dest);
	if (size > len_src || size > len_dest)
		return 0;
	while (++i < size)
		dest[i - 1] = src[i - 1];
	dest[--i] = '\0';
	return (len_src);
}

int		main(void)
{
	unsigned int return_1;
	unsigned int return_2;

	printf("       	\nstrlcpy ----- 1 ---- ft_strlcpy\n");
	printf("CAS :: dest < src && size < len(src)\n");
		unsigned int size = 5;
		char src[] = "aaasafasdas";
		char dest[] =  "zzzzzzz";
		char destn[] =  "zzzzzzz";

		printf("source 	: 	%s\n", src);
		printf("dest	: 	%s\n", dest);
		return_1 = strlcpy(dest, src, size);
		return_2 = ft_strlcpy(destn, src, size);
		printf("return : 	%d      ------------    %d\n", return_1, return_2);
		printf("dest   : 	%s   -----    %s\n", dest, destn);

	printf("       	\nstrlcpy ----- 2 ---- ft_strlcpy\n");
	printf("CAS :: dest < src && size > len(src)\n");
		printf("##################### TO FIX #####################\n");
		unsigned int size_2 = 5;
		char src_2[] = "aaa";
		char dest_2[] =  "z";
		char destn_2[] =  "z";

		printf("source 	: 	%s\n", src_2);
		printf("dest	: 	%s\n", dest_2);
		// return_1 = strlcpy(dest_2, src_2, size_2);
		// return_2 = ft_strlcpy(destn_2, src_2, size_2);
		// printf("return : 	%d      ------------    %d\n", return_1, return_2);
		// printf("dest   : 	%s   -----    %s\n\n", dest_2, destn_2);

	printf("       	\nstrlcpy ----- 3 ---- ft_strlcpy\n");
	printf("CAS :: dest > src && size < len(src)\n");
		// printf("##################### TO FIX #####################\n\n");
		unsigned int size_3 = 3;
		char src_3[] = "QQQQQ";
		char dest_3[] =  "zzzzzzz";
		char destn_3[] =  "zzzzzzz";

		printf("source 	: 	%s\n", src_3);
		printf("dest	: 	%s\n", dest_3);
		return_1 = strlcpy(dest_3, src_3, size_3);
		return_2 = ft_strlcpy(destn_3, src_3, size_3);
		printf("return : 	%d      ------------    %d\n", return_1, return_2);
		printf("dest   : 	%s   -----    %s\n\n", dest_3, destn_3);

	printf("       	\nstrlcpy ----- 4 ---- ft_strlcpy\n");
	printf("CAS :: dest > src && size > len(src)\n");
		printf("##################### TO FIX #####################\n");
		unsigned int size_4 = 10;
		char src_4[] = "QQQQQ";
		char dest_4[] =  "zzzzzzz";
		char destn_4[] =  "zzzzzzz";

		printf("source 	: 	%s\n", src_4);
		printf("dest	: 	%s\n", dest_4);
		// return_1 = strlcpy(dest_4, src_4, size_4);
		// return_2 = ft_strlcpy(destn_4, src_4, size_4);
		// printf("return : 	%d      ------------    %d\n", return_1, return_2);
		// printf("dest   : 	%s   -----    %s\n\n", dest_4, destn_4);

	printf("       	\nstrlcpy ----- 5 ---- ft_strlcpy\n");
	printf("CAS 	:: dest > src && size = len(src)\n");
		// printf("##################### TO FIX #####################\n\n");
		unsigned int size_5 = 5;
		char src_5[] = "QQQQQ";
		char dest_5[] =  "zzzzzzz";
		char destn_5[] =  "zzzzzzz";

		printf("source 	: 	%s\n", src_5);
		printf("dest	: 	%s\n", dest_5);
		// return_1 = strlcpy(dest_5, src_5, size_5);
		return_2 = ft_strlcpy(destn_5, src_5, size_5);
		printf("return : 	%d      ------------    %d\n", return_1, return_2);
		printf("source : 	%s\n", src_5);
		printf("dest   : 	%s   -----    %s\n\n", dest_5, destn_5);

	printf("       	\nstrlcpy ----- 6 ---- ft_strlcpy\n");
	printf("CAS :: dest < src && size = len(src)\n");
		printf("##################### TO FIX #####################\n\n");
		unsigned int size_6 = 5;
		char src_6[] = "QQQQQ";
		char dest_6[] =  "zz";
		char destn_6[] =  "zz";

		printf("source 	%d: 	%s\n",ft_strlen(src_6), src_6);
		printf("dest	%d: 	%s\n",ft_strlen(dest_6), dest_6);
		printf("return : 	%d      ------------    %d\n", return_1, return_2);
		printf("dest   : 	%s   -----    %s\n\n", dest_6, destn_6);

	
	return 0;
}