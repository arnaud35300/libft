/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:54:39 by arguilla          #+#    #+#             */
/*   Updated: 2021/01/08 13:51:33 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 ** Create a new string starting at index start in the string s and which ends
 ** when the new string length is less or equal to len.
 **
 ** @param	s		=> the string to browse.
 ** @param	start	=> the index which represents the beginning
 ** of the new string.
 ** @param	len		=> the max length of the new string.
 **
 ** @return the new string.
 */

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
