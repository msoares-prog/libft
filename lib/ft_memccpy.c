/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoares <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 16:47:12 by msoares           #+#    #+#             */
/*   Updated: 2020/01/22 14:46:36 by msoares          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*src2;
	unsigned char	*dest2;

	i = 0;
	src2 = (unsigned char *)src;
	dest2 = (unsigned char *)dest;
	while (i < n)
	{
		dest2[i] = src2[i];
		if ((dest2[i] == (unsigned char)c) || src2[i] == (unsigned char)c)
		{
			return (dest + (++i));
		}
		i++;
	}
	return (0);
}
