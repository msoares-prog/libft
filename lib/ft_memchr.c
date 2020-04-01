/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoares <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 14:05:31 by msoares           #+#    #+#             */
/*   Updated: 2020/01/22 14:26:48 by msoares          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	c2;
	int				i;

	i = 0;
	c2 = (unsigned char)c;
	ptr = (unsigned char *)str;
	while (n--)
	{
		if (ptr[i] == c2)
		{
			return (ptr + i);
		}
		i++;
	}
	return (0);
}
