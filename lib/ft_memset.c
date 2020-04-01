/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoares <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 15:24:36 by msoares           #+#    #+#             */
/*   Updated: 2020/01/22 14:28:49 by msoares          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t size)
{
	char	*tmp;
	size_t	i;

	i = 0;
	tmp = str;
	while (i < size)
	{
		tmp[i] = c;
		i++;
	}
	return (str);
}
