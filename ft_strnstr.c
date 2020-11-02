/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 18:03:04 by arguilla          #+#    #+#             */
/*   Updated: 2020/11/02 10:47:35 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (!little || !ft_strlen(little))
		return ((char *)big);
	while (i < len && big[i] != '\0')
	{
		if (big[i] == little[j])
			j++;
		else
			j = 0;
		i++;
		if (j == ft_strlen(little))
			return ((char *)&big[i - ft_strlen(little)]);
	}
	return (NULL);
}
