/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 11:06:32 by arguilla          #+#    #+#             */
/*   Updated: 2021/01/08 10:56:07 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Compare byte string s1 against byte string s2.
**
** @param	s1	=> the string to be compared with s2.
** @param	s2	=> the string to be compared with s1.
** @param	n	=> the max length to the comparison.
**
** @return	0 if the two strings are identical, otherwise returns the
** difference between the first two differing bytes.
*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;

	if (n == 0)
		return (0);
	i = 0;
	while ((i < n - 1) && (*(char *)(s1 + i) == *(char *)(s2 + i)
				&& *(char *)(s2 + i) && *(char *)(s1 + i)))
		i++;
	return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
}
