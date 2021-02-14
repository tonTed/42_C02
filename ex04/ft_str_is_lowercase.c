/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tonted <tonted@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 21:07:21 by tonted            #+#    #+#             */
/*   Updated: 2021/02/13 23:21:36 by tonted           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Écrire une fonction qui renvoie 1 si la chaîne passée en paramètre ne contient
** que des caractères alphabétiques minuscules et renvoie 0 si la chaîne passée en
** paramètre contient d’autres types de caractères.
**
** Elle devra renvoyer 1 si str est une chaîne vide.
*/

#include <string.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int i;

	i = -1;
	while(str[++i] != '\0')
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
	return (1);
}

int		main(void)
{
	printf("%d\n", ft_str_is_lowercase("nklanoisdn"));
	printf("%d\n", ft_str_is_lowercase("dakAFgla92"));
	printf("%d\n", ft_str_is_lowercase("jfiend-.fsd"));
	printf("%d\n", ft_str_is_lowercase("zzzaaaza"));
	printf("%d\n", ft_str_is_lowercase("qk ki2 '"));
	printf("%d\n", ft_str_is_lowercase(""));
	return 0;
}