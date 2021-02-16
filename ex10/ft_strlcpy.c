/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 21:25:53 by tonted            #+#    #+#             */
/*   Updated: 2021/02/16 13:24:54 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Reproduire à l’identique le fonctionnement de la fonction strlcpy
** (man strlcpy).
*/

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len_src;

	i = 0;
	len_src = ft_strlen(src);
	while (++i< size && i <= len_src)
		dest[i - 1] = src[i - 1]; 
	dest[--i] = '\0';
	return (len_src);
}

int main()
{
			// TEST_1
		char dest_o_1[20] = "Bonjour 42";
		char src_o_1[] = "Hello 42";
		printf("TEST_o_1 -- dest: %s / src: %s / n: %lu -- TEST_1\n",dest_o_1, src_o_1, sizeof(dest_o_1));
		printf("\t|\n");
		printf("\t|-> expected > %lu\n", strlcpy(dest_o_1, src_o_1, sizeof(dest_o_1)));
		printf("\t|-> expected > %s\n", dest_o_1);
		char dest_n_1[20] = "Bonjour 42";
		char src_n_1[] = "Hello 42";
		printf("\t|\n");
		printf("\t|-> return   > %u\n", ft_strlcpy(dest_n_1, src_n_1, sizeof(dest_o_1)));
		printf("\t|-> return   > %s\n", dest_n_1);
	
	// TEST_2
		char dest_o_2[20] = "";
		char src_o_2[] = "";
		printf("\nTEST_o_2 -- dest: %s / src: %s / n: %lu -- TEST_2\n",dest_o_2, src_o_2, sizeof(dest_o_2));
		printf("\t|\n");
		printf("\t|-> expected > %lu\n", strlcpy(dest_o_2, src_o_2, sizeof(dest_o_2)));
		printf("\t|-> expected > %s\n", dest_o_2);
		char dest_n_2[20] = "";
		char src_n_2[] = "";
		printf("\t|\n");
		printf("\t|-> return   > %u\n", ft_strlcpy(dest_n_2, src_n_2, sizeof(dest_o_2)));
		printf("\t|-> return   > %s\n", dest_n_2);
	
	// TEST_3
		char dest_o_3[20] = "";
		char src_o_3[] = "allo";
		printf("\nTEST_o_3 -- dest: %s / src: %s / n: %lu -- TEST_3\n",dest_o_3, src_o_3, sizeof(dest_o_3));
		printf("\t|\n");
		printf("\t|-> expected > %lu\n", strlcpy(dest_o_3, src_o_3, sizeof(dest_o_3)));
		printf("\t|-> expected > %s\n", dest_o_3);
		char dest_n_3[20] = "";
		char src_n_3[] = "allo";
		printf("\t|\n");
		printf("\t|-> return   > %u\n", ft_strlcpy(dest_n_3, src_n_3, sizeof(dest_o_3)));
		printf("\t|-> return   > %s\n", dest_n_3);
	
	// TEST_4
		char dest_o_4[15] = "1234567890";
		char src_o_4[] = "0987654321";
		printf("\nTEST_o_4 -- dest: %s / src: %s / n: %lu -- TEST_4\n",dest_o_4, src_o_4, sizeof(dest_o_4));
		printf("\t|\n");
		// printf("\t|---------- TOFIX\n");
		printf("\t|-> expected > %lu\n", strlcpy(dest_o_4, src_o_4, sizeof(dest_o_4)));
		printf("\t|-> expected > %s\n", dest_o_4);
		char dest_n_4[15] = "1234567890";
		char src_n_4[] = "0987654321";
		printf("\t|\n");
		printf("\t|-> return   > %u\n", ft_strlcpy(dest_n_4, src_n_4, sizeof(dest_o_4)));
		printf("\t|-> return   > %s\n", dest_n_4);
	
	// TEST_5
		char dest_o_5[15] = "!?&@%@#$?($$#";
		char src_o_5[] = "C'est quoi ça?";
		printf("\nTEST_o_5 -- dest: %s / src: %s / n: %lu -- TEST_5\n",dest_o_5, src_o_5, sizeof(dest_o_5));
		printf("\t|\n");
		// printf("\t|---------- TOFIX\n");
		printf("\t|-> expected > %lu\n", strlcpy(dest_o_5, src_o_5, sizeof(dest_o_5)));
		printf("\t|-> expected > %s\n", dest_o_5);
		char dest_n_5[15] = "!?&@%@#$?($$#";
		char src_n_5[] = "C'est quoi ça?";
		printf("\t|\n");
		printf("\t|-> return   > %u\n", ft_strlcpy(dest_n_5, src_n_5, sizeof(dest_o_5)));
		printf("\t|-> return   > %s\n", dest_n_5);
	
	// TEST_6
		char dest_o_6[20] = "ç";
		char src_o_6[] = "œ";
		printf("\nTEST_o_6 -- dest: %s / src: %s / n: %lu -- TEST_6\n",dest_o_6, src_o_6, sizeof(dest_o_6));
		printf("\t|\n");
		printf("\t|-> expected > %lu\n", strlcpy(dest_o_6, src_o_6, sizeof(dest_o_6)));
		printf("\t|-> expected > %s\n", dest_o_6);
		char dest_n_6[20] = "ç";
		char src_n_6[] = "œ";
		printf("\t|\n");
		printf("\t|-> return   > %u\n", ft_strlcpy(dest_n_6, src_n_6, sizeof(dest_o_6)));
		printf("\t|-> return   > %s\n", dest_n_6);
	
	// TEST_7
		char dest_o_7[20] = "\0";
		char src_o_7[] = "\t";
		printf("\nTEST_o_7 -- dest: %s / src: %s / n: %lu -- TEST_7\n",dest_o_7, src_o_7, sizeof(dest_o_7));
		printf("\t|\n");
		printf("\t|-> expected > %lu\n", strlcpy(dest_o_7, src_o_7, sizeof(dest_o_7)));
		printf("\t|-> expected > %s\n", dest_o_7);
		char dest_n_7[20] = "\0";
		char src_n_7[] = "\t";
		printf("\t|\n");
		printf("\t|-> return   > %u\n", ft_strlcpy(dest_n_7, src_n_7, sizeof(dest_o_7)));
		printf("\t|-> return   > %s\n", dest_n_7);

	
		printf("\t|\n\t|- END *****\n\n");

	// char dest_o_7[20] = "Ecole 42";

	// for(unsigned int i = 0; i < sizeof(dest_o_7); i++)
	// 	printf("%d\n", dest_o_7[i]);
	
	return 0;
}