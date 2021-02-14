/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 21:15:35 by tonted            #+#    #+#             */
/*   Updated: 2021/02/14 11:25:18 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Écrire une fonction qui met en minuscule chaque lettre.
**
** Elle devra renvoyer str.
*/

#include <string.h>
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int i;

	i = -1;
	while (str[++i] != '\0')
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
	return (str);
}

int		main(void)
{
	char string1[] = "nklanoiASDAfgdn";
	char string2[] = "dakAFgla92";
	char string3[] = "jfienfFASDAASd-.fsd";
	char string4[] = "AAZzzASgaazaZZG";
	char string5[] = "qk kiDAS2 'YQAF";

	ft_strlowcase(string1);
	ft_strlowcase(string2);
	ft_strlowcase(string3);
	ft_strlowcase(string4);
	ft_strlowcase(string5);

	printf("%s\n", string1);
	printf("%s\n", string2);
	printf("%s\n", string3);
	printf("%s\n", string4);
	printf("%s\n", string5);

	return 0;
}