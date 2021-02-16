/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tonted <tonted@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 21:25:53 by tonted            #+#    #+#             */
/*   Updated: 2021/02/15 21:03:34 by tonted           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Reproduire à l’identique le fonctionnement de la fonction strlcpy
** (man strlcpy).
*/
#include <string.h>
#include <stdio.h>

int				ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len_src;

	i = 0;
	len_src = ft_strlen(src);
	if (size > ft_strlen(dest) + 1)
		return (0);
	while (++i< size && i <= len_src)
		dest[i - 1] = src[i - 1]; 
	dest[--i] = '\0';
	return (len_src);
}

int main()
{
	char dest[] = "987654321";
	char src[] = "123456";
	int return1 = strlcpy(dest, src, 10);
	printf("%s (%d)\n", dest, return1);

	char dest2[] = "987654321";
	char src2[] = "123456";
	int return2 = ft_strlcpy(dest2, src2, 10);
	printf("%s (%d)\n", dest2, return2);


	return 0;
}

