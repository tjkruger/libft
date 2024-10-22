/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjkruger <tjkruger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 12:21:39 by tjkruger          #+#    #+#             */
/*   Updated: 2024/10/20 15:37:34 by tjkruger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(int num, int size)
{
	int				total_size;
	unsigned char	*counter;
	int				i;
	void			*ptr;

	i = 0;
	total_size = num * size;
	if (size != 0 && total_size / size != num)
	{
		return (0);
	}
	ptr = malloc(total_size);
	if (!ptr)
	{
		return (0);
	}
	counter = (unsigned char *)ptr;
	while (i < total_size)
	{
		counter[i] = 0;
		i++;
	}
	return (ptr);
}
