/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 10:46:13 by arguilla          #+#    #+#             */
/*   Updated: 2021/01/14 12:09:33 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Delete and free memory of lst, and all next element.
**
** @param	lst		=> the element to delete.
** @param	del		=> the function which delete element.
**
** @return	void.
*/

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *tmp;

	if (!*lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
}
