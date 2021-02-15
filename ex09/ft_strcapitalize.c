/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 21:22:18 by tonted            #+#    #+#             */
/*   Updated: 2021/02/15 17:43:17 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_alpha(char *c)
{
	if ((*c >= 'a' && *c <= 'z') || (*c >= 'A' && *c <= 'Z'))
		return (1);
	return (0);
}

int		is_numeric(char *c)
{
	if ((*c >= '0' && *c <= '9'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		start_word;

	i = -1;
	start_word = 1;
	while (str[++i] != '\0')
	{
		if (is_alpha(&str[i]))
		{
			if (start_word == 1 && str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 32;
				start_word = 0;
			}
			else if (start_word != 1 && str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
			else
				start_word = 0;
		}
		else if (is_numeric(&str[i]))
			start_word = 0;
		else
			start_word = 1;
	}
	return (str);
}
