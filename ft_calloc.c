/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaqsi <ytaqsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:51:40 by ytaqsi            #+#    #+#             */
/*   Updated: 2022/10/25 11:30:00 by ytaqsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	void	*p;
	char	*r;

	if (size != 0 && nmemb * size / size != nmemb)
		return (NULL);
	i = 0;
	p = NULL;
	p = malloc(nmemb * size);
	if (!p)
		return (NULL);
	r = p;
	while (i < nmemb * size)
		r[i++] = 0;
	return (p);
}
