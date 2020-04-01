/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoares <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 16:57:14 by msoares           #+#    #+#             */
/*   Updated: 2020/02/13 14:48:49 by msoares          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;

	if (s == NULL)
		return (NULL);
	sub = (char *)ft_calloc((len + 1), sizeof(char));
	if (sub == NULL)
		return (NULL);
	if ((unsigned int)ft_strlen(s) < start)
		return (sub);
	ft_strlcpy(sub, (s + start), len + 1);
	return (sub);
}
