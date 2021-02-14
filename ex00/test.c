/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tonted <tonted@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 20:54:45 by tonted            #+#    #+#             */
/*   Updated: 2021/02/13 21:52:32 by tonted           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Reproduire à l’identique le fonctionnement de la fonction strcpy (man strcpy).
*/

#include <string.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = - 1;
	while (src[++i] != '\0')
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

int		main(void)
{
	char src[] = "Teddy";
	char dest[6];

	printf("src = %s // dest = %s\n", src, dest);
	ft_strcpy(&dest[0], &src[0]);
	printf("src = %s // dest = %s\n", src, dest);
	
	return 0;
}
