/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tonted <tonted@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 20:58:49 by tonted            #+#    #+#             */
/*   Updated: 2021/02/13 23:08:54 by tonted           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Écrire une fonction qui renvoie 1 si la chaîne passée en paramètre ne contient que
**	des caractères alphabétiques et renvoie 0 si la chaîne passée en paramètre contient
**	d’autres types de caractères.
**
**	Elle devra renvoyer 1 si str est une chaîne vide
*/

int		ft_str_is_alpha(char *str)
{
	int i;

	i = -1;
	while(str[++i] != '\0')
		if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')))
			return (0);
	return (1);
}
