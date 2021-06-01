/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 09:15:30 by arguilla          #+#    #+#             */
/*   Updated: 2021/02/11 15:52:29 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
static int		is_charset(char c, char charset)
{
	return (c == charset || c == '\0');
}

static int		get_tab_len(char const *s, char c)
{
	int	i;
	int count;

	i = 1;
	count = 0;
	if (s && !is_charset(s[0], c))
		count++;
	while (s && s[0] && s[i])
	{
		if (is_charset(s[i - 1], c) && !is_charset(s[i], c))
			count++;
		i++;
	}
	return (count);
}

static char		*assign_char(char *current_s, char const **s, char c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (is_charset(*(*s), c))
		(*s)++;
	while (!is_charset(*(*s + len), c))
		len++;
	current_s = malloc(sizeof(char) * len + 1);
	if (!current_s)
		return (current_s);
	while (!is_charset(*(*s + i), c))
	{
		current_s[i] = *(*s + i);
		i++;
	}
	current_s[i] = '\0';
	(*s) += len;
	return (current_s);
}

char			**exit_and_free(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}
*/
/*
** Split a string when c is in the string s, and store split value
** in a array of strings.
**
** @param	s	=> the string to split.
** @param	c	=> the delimiter.
**
** @return	array of multiples part of the string s, NULL if malloc fails.
*/
/*

char			**ft_split(char const *s, char c)
{
	char	**tab;
	int		len;
	int		i;

	len = get_tab_len(s, c);
	tab = malloc(sizeof(char *) * (len + 1));
	if (!tab)
		return (NULL);
	i = 0;
	while (s && i < len)
	{
		tab[i] = assign_char(tab[i], &s, c);
		if (!tab[i])
			return (exit_and_free(tab));
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
*/
#include "libft.h"
static char		**ft_free_all(char **ret)
{
	size_t i = 0;
	while (ret[i])
	{
		free(ret[i]);
		i++;
	}
	free(ret);
	return (NULL);
}
static size_t	ft_wordlen(char const *s, char c, size_t i)
{
	size_t count;
	count = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i] && s[i] != c)
	{
		count++;
		i++;
	}
	return (count);
}
static size_t	ft_nb_word(char const *s, char c)
{
	size_t i;
	size_t count;
	i = 0;
	count = 0;
	if (!s)
		return (0);
	if (s[0] && s[0] != c)
		count++;
	while (s[i])
	{
		if (i > 0 && s[i] != c && s[i - 1] == c)
			count++;
		i++;
	}
	return (count);
}
static char		*ft_fill_tab(char const *s, char c, char *ret, size_t *i)
{
	size_t j;
	j = 0;
	while (s[*i] && s[*i] == c)
		(*i)++;
	while (s[*i] && s[*i] != c)
	{
		ret[j] = s[*i];
		(*i)++;
		j++;
	}
	ret[j] = '\0';
	return (ret);
}
char			**ft_split(char const *s, char c)
{
	size_t	k;
	char			**ret;
	size_t			i;
	size_t			nb_word;
	static size_t	j = 0;
	i = 0;
	nb_word = ft_nb_word(s, c);
	ret = (char **)malloc(sizeof(char *) * (nb_word + 1));
	if (!ret)
		return (NULL);
	while (nb_word--)
	{
		k = ft_wordlen(s, c, i);
		ret[j] = (char *)malloc(sizeof(char) * (k + 10));
		if (!ret[j])
			return (ft_free_all(ret));
		ret[j] = ft_fill_tab(s, c, ret[j], &i);
		j++;
	}
	ret[j] = NULL;
	return (ret);
}

/*
#include <stdio.h>
int main(void)
{
	char **tab;
	char *e = 0;
	tab = ft_split("", 0);
	int i = -1;

	while (tab[++i])
	{
		printf("%s\n", tab[i]);
		free(tab[i]);
	}
	free(tab);
}*/
