/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 21:25:53 by tonted            #+#    #+#             */
/*   Updated: 2021/02/16 13:32:13 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Reproduire à l’identique le fonctionnement de la fonction strlcpy
** (man strlcpy).
*/

unsigned int	ft_strlen(char *str)
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
	while (++i < size && i <= len_src)
		dest[i - 1] = src[i - 1];
	dest[--i] = '\0';
	return (len_src);
}
