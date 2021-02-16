/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tonted <tonted@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 21:27:41 by tonted            #+#    #+#             */
/*   Updated: 2021/02/15 22:22:03 by tonted           ###   ########.fr       */
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

#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <ctype.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	to_hex(int dec)
{
	char *hex;

	hex = "0123456789abcdef";
	if (dec <= 16)
	{
		ft_putchar('0');
	}
	if (dec > 16)
	{
		to_hex(dec / 16);
		to_hex(dec % 16);
	}
	else
		ft_putchar(hex[dec]);
		
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = -1;
	while(str[++i])
		if(str[i] >= 0 && str[i] <= 31 || str[i] == 127)
		{	
			ft_putchar('\\');
			to_hex(str[i]);
		}
		else
			ft_putchar(str[i]);
}

int main()
{	
	char string[] = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(string);
	
	for(int i = 0; i < 32; i++)
	{
		to_hex(i);
		ft_putchar('\n');
	}

	
	
	
	// int i = -1;
	// while(++i <= 127)
	// 	printf("i = %d >> %d\n", i, isprint(i));
	return 0;
}

