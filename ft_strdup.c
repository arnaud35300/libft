/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 01:05:50 by arguilla          #+#    #+#             */
/*   Updated: 2020/11/29 17:17:34 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s_copy;
	size_t	len;
	size_t	i;

	len = 0;
	i = 0;
	while (s[len])
		len++;
	s_copy = malloc(sizeof(char) * (len + 1));
	if (!s_copy)
		return (NULL);
	while (i < len)
	{
		s_copy[i] = s[i];
		i++;
	}
	s_copy[i] = '\0';
	return (char *)(s_copy);
}
