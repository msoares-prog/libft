/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoares <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 16:06:39 by msoares           #+#    #+#             */
/*   Updated: 2020/02/12 21:03:01 by msoares          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(char const *s1, char const *s2, size_t n)
{
	size_t	i;
	int		d;

	d = 0;
	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && !d && i < n)
	{
		d = (unsigned char)s1[i] - (unsigned char)s2[i];
		i++;
	}
	if (i < n && !d && (s1[i] == '\0' || s2[i] == '\0'))
	{
		d = (unsigned char)s1[i] - (unsigned char)s2[i];
	}
	return (d);
}
