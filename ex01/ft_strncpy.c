/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tonted <tonted@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 20:56:56 by tonted            #+#    #+#             */
/*   Updated: 2021/02/13 23:05:29 by tonted           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Reproduire à l’identique le fonctionnement de la fonction strncpy (man strncpy).
*/

#include <string.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
        i++;
    return i;
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i;
	int diff;

	i = -1;
	diff = ft_strlen(src) - ft_strlen(dest);
	if (diff < 0) // dest > src
	{
		while(++i < n)
			dest[i] = src[i];
		// while(dest[i] != '\0')
		// 	dest[i++] = '\0';
	}
	else // dest < src
		while (dest[++i] != '\0')
			dest[i] = src[i];
	return (dest);
}

int 	main(void)
{
	char src[] = "Ecokmadakncas;ldma";
	char dest[] = "Schoollll";

	printf("src = %s // dest = %s\n", src, dest);
	strncpy(&dest[0], &src[0], 5);
	printf("src = %s // dest = %s \n", src, dest);

	char dest2[] = "Schoollll";
	ft_strncpy(&dest2[0], &src[0], 5);
	printf("src = %s // dest = %s \n", src, dest2);
	
	return 0;
}