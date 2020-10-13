/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 00:01:13 by arguilla          #+#    #+#             */
/*   Updated: 2020/10/14 00:38:41 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	void	**tab;

	i = 0;
	tab = malloc(nmemb);
	if (!tab)
		return (NULL);
	while (i < nmemb)
	{
		tab[i] = malloc(size);
		if (!tab[i])
			return (NULL);
		tab[i] = NULL;
		i++;
	}
	return (tab);
}
