/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 21:27:41 by tonted            #+#    #+#             */
/*   Updated: 2021/02/18 15:59:04 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Écrire une fonction qui affiche une chaîne de caractères à l’écran. Si cette
** chaîne contient des caractères non-imprimables, ils devront être affichés
** sous forme hexadécimale (en minuscules) en les précédant d’un "backslash".
**
** Par exemple, avec ce paramètre :
** 		Coucou\ntu vas bien ?
**
** La fonction devra afficher :
** 		Coucou\0atu vas bien ?
*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	to_hex(int decimal)
{
	char *hex;

	hex = "0123456789abcdef";
	if (decimal > 16)
	{
		to_hex(decimal / 16);
		to_hex(decimal % 16);
	}
	else
		ft_putchar(hex[decimal]);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = -1;
	while (str[++i])
		if ((str[i] >= 0 && str[i] <= 31) || str[i] == 127)
		{
			ft_putchar('\\');
			if (str[i] <= 16)
				ft_putchar('0');
			to_hex(str[i]);
		}
		else
			ft_putchar(str[i]);
}

#include <stdio.h>

int main()
{	
	char string[] = "Coucou\ntu va\rs bien ?";
	ft_putstr_non_printable(string);
	return 0;
}