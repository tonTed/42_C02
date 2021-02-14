/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 21:11:39 by tonted            #+#    #+#             */
/*   Updated: 2021/02/14 10:32:00 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Écrire une fonction qui renvoie 1 si la chaîne passée en paramètre ne
** contient que des caractères affichables et renvoie 0 si la chaîne passée en
** paramètre contient d’autres types de caractères.
**
** Elle devra renvoyer 1 si str est une chaîne vide.
*/

int	ft_str_is_printable(char *str)
{
	int i;

	i = -1;
	while (str[++i] != '\0')
		if (!(str[i] >= 32 && str[i] <= 127))
			return (0);
	return (1);
}
