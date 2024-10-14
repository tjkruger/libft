/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjkruger <tjkruger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 18:36:45 by tjkruger          #+#    #+#             */
/*   Updated: 2024/10/14 18:46:39 by tjkruger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*my_memcpy(void *dest, const void *src, unsigned int n)
{
	int		i;
	char	*cdest;
	char	*csrc;

	csrc = (char *)src;
	cdest = (char *)dest;
	i = 0;
	for (unsigned int i = 0; i < n; i++)
	{
		cdest[i] = csrc[i];
	}
	return (dest);
}
/*
int	main(void)
{
	char	src[] = "Hello, World!";
	char	dest[50];

	// Using my_memcpy function to copy the string
	my_memcpy(dest, src, sizeof(src));
	printf("Copied string: %s\n", dest);
	return (0);
}
*/