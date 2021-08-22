/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 18:01:37 by arguilla          #+#    #+#             */
/*   Updated: 2021/01/08 10:34:50 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Get the number of elements in a list.
**
** @param	@lst	=> the list to browse.
**
** @return	The length of lst, 0 if lst is not valid
*/

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 1;
	if (!lst)
		return (0);
	while (lst->next != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
