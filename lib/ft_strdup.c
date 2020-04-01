/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoares <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 16:05:39 by msoares           #+#    #+#             */
/*   Updated: 2020/02/12 21:01:11 by msoares          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char const *str)
{
	size_t	len;
	char	*dest;

	len = 0;
	while (str[len] != '\0')
		len++;
	dest = (char *)malloc(len + 1 * sizeof(*str));
	if (!dest)
	{
		return (0);
	}
	len = 0;
	while (str[len])
	{
		dest[len] = str[len];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
