/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 21:18:42 by arguilla          #+#    #+#             */
/*   Updated: 2020/11/02 21:46:50 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	assign(char *r, char const *s, size_t *i)
{
	while (*s)
	{
		r[*i] = *s;
		s++;
		(*i)++;
	}
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*r;
	size_t	i;

	r = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!r)
		return (NULL);
	i = 0;
	assign(r, s1, &i);
	assign(r, s2, &i);
	r[i] = '\0';
	return (r);
}
