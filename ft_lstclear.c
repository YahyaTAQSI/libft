/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaqsi <ytaqsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:25:57 by ytaqsi            #+#    #+#             */
/*   Updated: 2022/10/25 11:30:38 by ytaqsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*nextlst;
	t_list	*currentlst;

	if (!del || !lst)
		return ;
	nextlst = *lst;
	while (nextlst != NULL)
	{
		currentlst = nextlst;
		nextlst = nextlst->next;
		del(currentlst->content);
		free(currentlst);
	}
	*lst = NULL;
}
