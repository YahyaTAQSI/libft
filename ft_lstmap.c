/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaqsi <ytaqsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:38:38 by ytaqsi            #+#    #+#             */
/*   Updated: 2022/10/25 11:30:49 by ytaqsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*current;

	newlst = NULL;
	while (lst)
	{
		current = ft_lstnew(f(lst->content));
		if (!current)
			ft_lstclear(&newlst, del);
		ft_lstadd_back(&newlst, current);
		lst = lst->next;
	}
	return (newlst);
}
