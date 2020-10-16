/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 02:04:11 by arguilla          #+#    #+#             */
/*   Updated: 2020/10/16 02:43:10 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	while (n)
	{
		*(char *)dest = *(char *)src;
		dest++;
		if (c == *(char *)src)
			return (dest);
		src++;
		n--;
	}
	return (NULL);
}
