/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 09:15:30 by arguilla          #+#    #+#             */
/*   Updated: 2021/01/08 12:57:06 by arguilla         ###   ########.fr       */
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

static int	assign_char(char *current_s, char const *s, char c, int index)
{
	int	i;
	int count;
	int	len;

	len = 0;
	i = 0;
	count = 0;
	if (!is_charset(s[0], c))
		count++;
	while (s[i])
	{
		if (i > 0)
			if (is_charset(s[i - 1], c) && !is_charset(s[i], c))
				count++;
		if (index + 1 == count)
			break;
		i++;
	}
	while (!is_charset(s[i + len], c))
		len++;
	current_s = malloc(sizeof(len) + 1);
	if (!current_s)
		return (0);
	while (!is_charset(s[i], c) && s[i])
	{
		printf("char : %c\n", s[i]);
		i++;
		*current_s = s[i];
		printf("char conv: %c\n", *current_s);
		i++;
		current_s++;
	}
	*current_s = '\0';
	printf("bienspasser %s\n", current_s);
	return (1);
}

/*
** Split a string when c is in the string s, and store split value
** in a array of strings.
**
** @param	s	=> the string to split.
** @param	c	=> the delimiter.
**
** @return	array of multiples part of the string s, NULL if malloc fails.
*/

char	**exit_and_free(char	**tab, int only_tab)
{
	int	i;

	i = 0;
	if (!only_tab)
		while (tab[i])
		{
			free(tab[i]);
			i++;
		}
	free(tab);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		len;
	int		i;

	len = get_tab_len(s, c);
	tab = malloc(sizeof(char *) * (len + 1));
	if (!tab)
		return (exit_and_free(tab, 1));
	tab[len] = NULL;
	i = 0;
	while (i < len)
	{
		printf("wesh");
		if (!tab[i] || !assign_char(tab[i], s, c, i))
			return (exit_and_free(tab, 0));
		i++;
	}
	return (tab);
}

int main(void)
{
	char *str = " coucou salut   bonjour ";
	char **tab = ft_split(str, ' ');
	int i = -1;
	while (tab[++i])
		printf("tab %d : %s\n", i, tab[i]);
}
