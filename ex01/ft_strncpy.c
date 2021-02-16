/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 20:56:56 by tonted            #+#    #+#             */
/*   Updated: 2021/02/16 13:49:09 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Reproduire à l’identique le fonctionnement de la fonction strncpy
** (man strncpy).
*/

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = -1;
	while (++i < n && src[i] != '\0')
		dest[i] = src[i];
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}
