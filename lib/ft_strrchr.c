/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoares <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 14:44:37 by msoares           #+#    #+#             */
/*   Updated: 2020/02/12 20:59:40 by msoares          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char const *str, int c)
{
	char	*str2;

	str2 = NULL;
	while (*str)
	{
		if (*str == (char)c)
		{
			str2 = (char *)str;
		}
		str++;
	}
	if (*str == (char)c)
	{
		str2 = (char *)str;
	}
	return (str2);
}
