/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 21:13:42 by tonted            #+#    #+#             */
/*   Updated: 2021/02/14 12:03:03 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Écrire une fonction qui met en majuscule chaque lettre.
**
** Elle devra renvoyer str.
*/

#include <string.h>
#include <stdio.h>
#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int i;

	i = -1;
	while (str[++i] != '\0')
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	return (str);
}

int		main(void)
{
	char string1[] = "nklanoisdn";
	char string2[] = "dakAFgla92";
	char string3[] = "jfiend-.fsd";
	char string4[] = "zzASgaaza";
	char string5[] = "qk ki2 '";

	ft_strupcase(string1);
	ft_strupcase(string2);
	ft_strupcase(string3);
	ft_strupcase(string4);
	ft_strupcase(string5);

	printf("%s\n", string1);
	printf("%s\n", string2);
	printf("%s\n", string3);
	printf("%s\n", string4);
	printf("%s\n", string5);

	write(1, string1, sizeof(string1));

	return 0;
}