/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 10:50:12 by arguilla          #+#    #+#             */
/*   Updated: 2021/01/08 10:49:30 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** locates the first occurence of c in string s
**
** @param	s	=> the string to browse.
** @param	c	=> the character to find.
**
** @return	pointer to the first occurence of c in string s, NULL if c is not
** in str.
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n && *(char *)s != '\0')
	{
		if (c == *(char *)s)
			return ((void *)s);
		s++;
		n--;
	}
	return (NULL);
}
