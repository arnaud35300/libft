/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:54:39 by arguilla          #+#    #+#             */
/*   Updated: 2020/11/02 21:04:33 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*r;
	size_t	r_len;
	size_t	i;

	if (start >= ft_strlen(s) || !s || len <= 0)
		return (ft_strdup(""));
	r_len = len - start;
	if (start + len > ft_strlen(s))
		r_len = ft_strlen(s) - start;
	r = malloc(sizeof(char) * (r_len + 1));
	if (!r)
		return (NULL);
	i = 0;
	while (s[i + start] != '\0' && i < len)
	{
		r[i] = s[i + start];
		i++;
	}
	r[i] = '\0';
	return (r);
}
