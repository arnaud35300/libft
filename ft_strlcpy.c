/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 00:44:56 by arguilla          #+#    #+#             */
/*   Updated: 2020/10/16 01:13:09 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t src_len;

	src_len = ft_strlen(src);
	if (!size)
		return (src_len);
	while (*src && (size - 1))
	{
		*dst = *src;
		size--;
		dst++;
		src++;
	}
	*dst = '\0';
	return (src_len);
}
