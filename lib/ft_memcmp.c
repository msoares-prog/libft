/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoares <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 14:18:32 by msoares           #+#    #+#             */
/*   Updated: 2020/01/22 16:32:21 by msoares          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*src;
	unsigned char	*dest;

	src = (unsigned char *)str1;
	dest = (unsigned char *)str2;
	if (n)
	{
		while (n--)
		{
			if (*src++ != *dest++)
			{
				return (*(--src) - *(--dest));
			}
		}
	}
	return (0);
}
