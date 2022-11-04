/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaqsi <ytaqsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 17:21:46 by ytaqsi            #+#    #+#             */
/*   Updated: 2022/10/25 11:30:53 by ytaqsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lp;

	lp = (t_list *)malloc(sizeof(t_list));
	if (!lp)
		return (NULL);
	lp->content = content;
	lp->next = NULL;
	return (lp);
}
