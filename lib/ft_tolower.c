/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoares <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 15:38:02 by msoares           #+#    #+#             */
/*   Updated: 2020/01/25 20:42:37 by msoares          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_tolower(int i)
{
	if (i >= 'A' && i <= 'Z')
	{
		i = i + 32;
		return (i);
	}
	return (i);
}
