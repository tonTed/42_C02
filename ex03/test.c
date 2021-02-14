/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tonted <tonted@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 21:05:08 by tonted            #+#    #+#             */
/*   Updated: 2021/02/13 23:15:35 by tonted           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Écrire une fonction qui renvoie 1 si la chaîne passée en paramètre ne contient que
** des chiffres et renvoie 0 si la chaîne passée en paramètre contient d’autres types
** de caractères.
** 
** Elle devra renvoyer 1 si str est une chaîne vide.
*/

#include <string.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int i;

	i = -1;
	while(str[++i] != '\0')
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
	return (1);
}

int		main(void)
{
	printf("%d\n", ft_str_is_numeric("479123-4512"));
	printf("%d\n", ft_str_is_numeric("d1394312kl"));
	printf("%d\n", ft_str_is_numeric("9140123"));
	printf("%d\n", ft_str_is_numeric("dalG@#4skm"));
	printf("%d\n", ft_str_is_numeric("46123:512"));
	printf("%d\n", ft_str_is_numeric(""));
	return 0;
}