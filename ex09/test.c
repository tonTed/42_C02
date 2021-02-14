/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 21:22:18 by tonted            #+#    #+#             */
/*   Updated: 2021/02/14 16:40:36 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Écrire une fonction qui met en majuscule la première lettre de chaque mot et 
** le reste du mot en minuscule.
** Un mot est une suite de caractères alphanumériques.
** 
** Elle devra renvoyer str.
**
** Par exemple :
** 		salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un
**
** Doit donner :
** 		Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un
*/

#include <string.h>
#include <stdio.h>

int	is_alpha(char *c)
{
	if ((*c >= 'a' && *c <= 'z') || (*c >= 'A' && *c <= 'Z'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int start_word;

	i = -1;
	start_word = 1;
	while(str[++i] != '\0')
	{
		if (is_alpha(&str[i]))
		{
			if(start_word == 1 && str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 32;
				start_word = 0;
			}
			else if (start_word != 1 && str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
			else
				start_word = 0;
		}
		else
			start_word = 1;
	}
	return (str);
}

int		main(void)
{
	char string[] = "salut, comment tu vA ? 42mots QUArante-deux; cinquAnte+et+un";

	ft_strcapitalize(string);
	printf("%s\n", string);

	return 0;
}