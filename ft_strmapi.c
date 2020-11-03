/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 10:17:20 by arguilla          #+#    #+#             */
/*   Updated: 2020/11/03 10:47:06 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*r;
	int		i;

	r = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!r || !s || !f)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		r[i] = (*f)(i, s[i]);
		i++;
	}
	r[i] = '\0';
	return (r);
}
