/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 21:05:08 by tonted            #+#    #+#             */
/*   Updated: 2021/02/15 14:32:31 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Écrire une fonction qui renvoie 1 si la chaîne passée en paramètre ne
** contient que des chiffres et renvoie 0 si la chaîne passée en paramètre
** contient d’autres types
** de caractères.
**
** Elle devra renvoyer 1 si str est une chaîne vide.
*/

int	ft_str_is_numeric(char *str)
{
	int i;

	i = -1;
	while (str[++i] != '\0')
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
	return (1);
}
