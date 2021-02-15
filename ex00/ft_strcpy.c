/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 20:54:45 by tonted            #+#    #+#             */
/*   Updated: 2021/02/15 14:35:58 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Reproduire à l’identique le fonctionnement de la fonction strcpy
** (man strcpy).
*/

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = -1;
	while (src[++i] != '\0')
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
