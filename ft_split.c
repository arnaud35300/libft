/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 09:15:30 by arguilla          #+#    #+#             */
/*   Updated: 2020/11/03 09:54:16 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	is_charset(char c, char charset)
{
	return (c == charset || c == '\0');
}

static int	get_tab_len(char const *s, char c)
{
	int	i;
	int count;

	i = 1;
	count = 0;
	if (!is_charset(s[0], c))
		count++;
	while (s[i])
	{
		if (is_charset(s[i - 1], c) && !is_charset(s[i], c))
			count++;
		i++;
	}
	return (count);
}

static int	get_char_len(char const *s, char c, int index)
{
	int	i;
	int count;
	int	char_len;

	i = 0;
	count = 0;
	char_len = 0;
	if (!is_charset(s[0], c))
		count++;
	while (s[i])
	{
		if (i > 0)
			if (is_charset(s[i - 1], c) && !is_charset(s[i], c))
				count++;
		if (index + 1 == count && !is_charset(s[i], c))
			char_len++;
		i++;
	}
	return (char_len);
}

static int	assign_char(char *current_s, char const *s, char c, int index)
{
	int	i;
	int count;
	int	char_len;

	i = 0;
	count = 0;
	char_len = 0;
	if (!is_charset(s[0], c))
		count++;
	while (s[i])
	{
		if (i > 0)
			if (is_charset(s[i - 1], c) && !is_charset(s[i], c))
				count++;
		if (index + 1 == count && !is_charset(s[i], c))
		{
			*current_s = s[i];
			current_s++;
		}
		i++;
	}
	*current_s = '\0';
	return (char_len);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		len;
	int		i;

	len = get_tab_len(s, c);
	tab = malloc(sizeof(char *) * (len + 1));
	if (!tab)
		return (NULL);
	tab[len] = NULL;
	i = 0;
	while (i < len)
	{
		tab[i] = malloc(sizeof(char) * (get_char_len(s, c, i) + 1));
		if (!tab[i])
			return (NULL);
		assign_char(tab[i], s, c, i);
		i++;
	}
	return (tab);
}
