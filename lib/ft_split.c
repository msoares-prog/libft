/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoares <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 17:16:20 by msoares           #+#    #+#             */
/*   Updated: 2020/02/14 15:17:41 by msoares          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_dlmt(char x, char c)
{
	return (x == c || x == '\0');
}

static int	word_counter(char const *s, char c)
{
	int		i;
	int		w_counter;

	i = 1;
	w_counter = 0;
	while (s[0] != '\0' && s[i] != '\0')
	{
		if (is_dlmt(s[i], c) && !is_dlmt(s[i - 1], c))
			w_counter++;
		i++;
	}
	if (ft_strlen(s) && is_dlmt(s[i], c) && !is_dlmt(s[i - 1], c))
		w_counter++;
	return (w_counter);
}

static int	pop_tab(char const *s, char ***tab, char c, int words)
{
	int		i;
	int		k;
	int		w_num;
	char	ant;

	i = 0;
	w_num = 0;
	ant = c;
	while (s[i] != '\0' && w_num < words)
	{
		if (!is_dlmt(s[i], c) && is_dlmt(ant, c))
		{
			k = i;
			while (!is_dlmt(s[k], c))
				k++;
			(*tab)[w_num] = (char*)malloc((k - i + 1) * sizeof(char));
			if ((*tab)[w_num] == 0)
				return (w_num);
			ft_strlcpy((*tab)[w_num], &s[i], k - i + 1);
			w_num++;
		}
		ant = s[i++];
	}
	(*tab)[w_num] = 0;
	return (-1);
}

static void	free_tab(char ***tab, int words)
{
	int		i;

	i = 0;
	while (i < words)
	{
		free((*tab)[i]);
		i++;
	}
	free(*tab);
}

char		**ft_split(char const *s, char c)
{
	int		num_words;
	int		fail_word;
	char	**tab;

	if (s == 0)
		return (0);
	num_words = word_counter(s, c);
	tab = (char**)malloc((num_words + 1) * sizeof(char*));
	if (tab != 0)
	{
		fail_word = pop_tab(s, &tab, c, num_words);
		if (fail_word < 0)
			return (tab);
		free_tab(&tab, fail_word);
	}
	return (0);
}
