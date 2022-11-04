/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaqsi <ytaqsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 12:13:24 by ytaqsi            #+#    #+#             */
/*   Updated: 2022/10/25 11:32:42 by ytaqsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;

	i = ft_strlen(str) - 1;
	if ((char)c == '\0')
		return ((char *)(str + i + 1));
	while (i >= 0)
	{
		if ((char)c == str[i])
			return ((char *)(str + i));
		i--;
	}
	return (NULL);
}
