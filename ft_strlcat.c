/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaqsi <ytaqsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 12:44:24 by ytaqsi            #+#    #+#             */
/*   Updated: 2022/10/24 15:52:40 by ytaqsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dl;
	size_t	sl;
	size_t	i;

	if (!dst && size <= 0)
		return (0);
	dl = ft_strlen(dst);
	sl = ft_strlen(src);
	i = 0;
	if (size <= dl)
		return (sl + size);
	if (size > 0)
	{
		while (src[i] && i < size - dl - 1)
		{
			dst[dl + i] = src[i];
			i++;
		}
		dst[dl + i] = '\0';
	}
	return (dl + sl);
}
