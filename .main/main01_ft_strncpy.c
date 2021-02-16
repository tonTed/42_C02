/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 20:56:56 by tonted            #+#    #+#             */
/*   Updated: 2021/02/16 13:44:01 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Reproduire à l’identique le fonctionnement de la fonction strncpy
** (man strncpy).
*/

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = -1;
	while (++i < n && src[i] != '\0')
		dest[i] = src[i];
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}

int main()
{
	// TEST_1
		char dest_o_1[20] = "allo";
		char src_o_1[] = "";
		int n_1 = 5;
		printf("TEST_o_1 -- dest: %s / src: %s / n: %d -- TEST_1\n",dest_o_1, src_o_1, n_1);
		printf("\t|\n");
		printf("\t|-> expected > %s\n", strncpy(dest_o_1, src_o_1, n_1));
		char dest_n_1[20] = "allo";
		char src_n_1[] = "";
		printf("\t|\n");
		printf("\t|-> return   > %s\n", ft_strncpy(dest_n_1, src_n_1, n_1));
	
	// TEST_2
		char dest_o_2[20] = "";
		char src_o_2[] = "";
		int n_2 = 5;
		printf("\nTEST_o_2 -- dest: %s / src: %s / n: %d -- TEST_2\n",dest_o_2, src_o_2, n_2);
		printf("\t|\n");
		printf("\t|-> expected > %s\n", strncpy(dest_o_2, src_o_2, n_2));
		char dest_n_2[20] = "";
		char src_n_2[] = "";
		printf("\t|\n");
		printf("\t|-> return   > %s\n", ft_strncpy(dest_n_2, src_n_2, n_2));
	
	// TEST_3
		char dest_o_3[20] = "";
		char src_o_3[] = "allo";
		int n_3 = 5;
		printf("\nTEST_o_3 -- dest: %s / src: %s / n: %d -- TEST_3\n",dest_o_3, src_o_3, n_3);
		printf("\t|\n");
		printf("\t|-> expected > %s\n", strncpy(dest_o_3, src_o_3, n_3));
		char dest_n_3[20] = "";
		char src_n_3[] = "allo";
		printf("\t|\n");
		printf("\t|-> return   > %s\n", ft_strncpy(dest_n_3, src_n_3, n_3));
	
	// TEST_4
		char dest_o_4[15] = "1234567890";
		char src_o_4[] = "0987654321";
		int n_4 = 5;
		printf("\nTEST_o_4 -- dest: %s / src: %s / n: %d -- TEST_4\n",dest_o_4, src_o_4, n_4);
		printf("\t|\n");
		// printf("\t|---------- TOFIX\n");
		printf("\t|-> expected > %s\n", strncpy(dest_o_4, src_o_4, n_4));
		char dest_n_4[15] = "1234567890";
		char src_n_4[] = "0987654321";
		printf("\t|\n");
		printf("\t|-> return   > %s\n", ft_strncpy(dest_n_4, src_n_4, n_4));
	
	// TEST_5
		char dest_o_5[15] = "!?&@%@#$?($$#";
		char src_o_5[] = "C'est quoi ça?";
		int n_5 = 5;
		printf("\nTEST_o_5 -- dest: %s / src: %s / n: %d -- TEST_5\n",dest_o_5, src_o_5, n_5);
		printf("\t|\n");
		// printf("\t|---------- TOFIX\n");
		printf("\t|-> expected > %s\n", strncpy(dest_o_5, src_o_5, n_5));
		char dest_n_5[15] = "!?&@%@#$?($$#";
		char src_n_5[] = "C'est quoi ça?";
		printf("\t|\n");
		printf("\t|-> return   > %s\n", ft_strncpy(dest_n_5, src_n_5, n_5));
	
	// TEST_6
		char dest_o_6[20] = "ç";
		char src_o_6[] = "œ";
		int n_6 = 5;
		printf("\nTEST_o_6 -- dest: %s / src: %s / n: %d -- TEST_6\n",dest_o_6, src_o_6, n_6);
		printf("\t|\n");
		printf("\t|-> expected > %s\n", strncpy(dest_o_6, src_o_6, n_6));
		char dest_n_6[20] = "ç";
		char src_n_6[] = "œ";
		printf("\t|\n");
		printf("\t|-> return   > %s\n", ft_strncpy(dest_n_6, src_n_6, n_6));
	
	// TEST_7
		char dest_o_7[20] = "\0";
		char src_o_7[] = "\t";
		int n_7 = 5;
		printf("\nTEST_o_7 -- dest: %s / src: %s / n: %d -- TEST_7\n",dest_o_7, src_o_7, n_7);
		printf("\t|\n");
		printf("\t|-> expected > %s\n", strncpy(dest_o_7, src_o_7, n_7));
		char dest_n_7[20] = "\0";
		char src_n_7[] = "\t";
		printf("\t|\n");
		printf("\t|-> return   > %s\n", ft_strncpy(dest_n_7, src_n_7, n_7));

	
		printf("\t|\n\t|- END *****\n\n");

	// char dest_o_7[20] = "Ecole 42";

	// for(unsigned int i = 0; i < n_7; i++)
	// 	printf("%d\n", dest_o_7[i]);
	
	return 0;
}
