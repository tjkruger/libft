/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjkruger <tjkruger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:11:07 by tjkruger          #+#    #+#             */
/*   Updated: 2024/10/15 15:42:35 by tjkruger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strnstr(const char *mstr, const char *sstr, int len)
{
	int	j;
	int	i;

	i = 0;
	if (!*sstr)
	{
		return ((char *)mstr);
	}
	while (mstr[i] && i < len)
	{
		j = 0;
		while (sstr[j] && mstr[i + j] == sstr[j] && (i + j) < len)
		{
			j++;
		}
		if (!sstr[j])
		{
			return ((char *)&mstr[i]);
		}
		i++;
	}
	return (0);
}
