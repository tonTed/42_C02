/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 20:56:56 by tonted            #+#    #+#             */
/*   Updated: 2021/02/14 14:33:00 by tblanco          ###   ########.fr       */
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
	
	printf("size = %d\n", n);

	i = -1;
	while (++i < n && src[i] != '\0')
		dest[i] = src[i];
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}

int 	main(void)
{
	char src[] = "Eco";
	char dest[] = "Schoollll";

	printf("src = %s // dest = %s\n", src, dest);
	strncpy(&dest[0], &src[0], 5);
	printf("src = %s // dest = %s \n", src, dest);

	char dest2[] = "Schoollll";
	ft_strncpy(&dest2[0], &src[0], 5);
	printf("src = %s // dest = %s \n", src, dest2);
	
	return 0;
}