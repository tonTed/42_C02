/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 20:58:49 by tonted            #+#    #+#             */
/*   Updated: 2021/02/16 13:55:04 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Écrire une fonction qui renvoie 1 si la chaîne passée en paramètre ne
** 	contient que des caractères alphabétiques et renvoie 0 si la chaîne passée
** en paramètre contient d’autres types de caractères.
**
**	Elle devra renvoyer 1 si str est une chaîne vide
*/

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int		i;
	char	*p;

	p = str;
	i = -1;
	while (p[++i] != '\0')
		if (!((p[i] >= 'a' && p[i] <= 'z') || (p[i] >= 'A' && p[i] <= 'Z')))
			return (0);
	return (1);
}

int		main(void)
{
	printf("%d\n", ft_str_is_alpha("dalGskm"));
	printf("%d\n", ft_str_is_alpha("dalG{skm"));
	printf("%d\n", ft_str_is_alpha("dalG[skm"));
	printf("%d\n", ft_str_is_alpha("dalGa931-skm"));
	printf("%d\n", ft_str_is_alpha("Aa\tl562Gskmz\n"));
	printf("%d\n", ft_str_is_alpha("dalG@#4skm"));
	printf("%d\n", ft_str_is_alpha("zalGsk@mA"));
	printf("%d\n", ft_str_is_alpha("zalGs3k@mA"));
	printf("%d\n", ft_str_is_alpha(""));
	return 0;
}