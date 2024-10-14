/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjkruger <tjkruger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 18:54:06 by tjkruger          #+#    #+#             */
/*   Updated: 2024/10/14 19:05:04 by tjkruger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	copy_backward(char *dest, const char *src, unsigned int n)
{
	dest += n - 1;
	src += n - 1;
	while (n--)
	{
		*dest-- = *src--;
	}
}

void	copy_forward(char *dest, const char *src, unsigned int n)
{
	while (n--)
	{
		*dest++ = *src++;
	}
}

void	*my_memmove(void *dest, const void *src, unsigned int n)
{
	char		*d;
	const char	*s;

	d = (char *)dest;
	s = (const char *)src;
	if (s < d && (s + n) > d)
	{
		copy_backward(d, s, n);
	}
	else
	{
		copy_forward(d, s, n);
	}
	return (dest);
}
