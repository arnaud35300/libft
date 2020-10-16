/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 17:00:22 by arguilla          #+#    #+#             */
/*   Updated: 2020/10/15 17:57:55 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *last_match;

	last_match = NULL;
	while (*s)
	{
		if (*s == c)
			last_match = ((char *)(s));
		s++;
	}
	if (c == '\0')
		last_match = ((char *)(s));
	return (last_match);
}
