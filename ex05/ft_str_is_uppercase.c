/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 21:09:49 by tonted            #+#    #+#             */
/*   Updated: 2021/02/15 14:35:32 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Écrire une fonction qui renvoie 1 si la chaîne passée en paramètre ne
** contient que des caractères alphabétiques majuscules et renvoie 0 si la
** chaîne passée en paramètre contient d’autres types de caractères.
**
** Elle devra renvoyer 1 si str est une chaîne vide.
*/

int	ft_str_is_uppercase(char *str)
{
	int i;

	i = -1;
	while (str[++i] != '\0')
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
	return (1);
}
