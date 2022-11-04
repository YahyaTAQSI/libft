/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaqsi <ytaqsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 20:22:48 by ytaqsi            #+#    #+#             */
/*   Updated: 2022/10/18 14:38:22 by ytaqsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*nextt;

	if (!lst)
		return (NULL);
	nextt = lst;
	while (nextt->next != NULL)
		nextt = nextt->next;
	return (nextt);
}
