/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaqsi <ytaqsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 11:33:43 by ytaqsi            #+#    #+#             */
/*   Updated: 2022/10/25 11:32:39 by ytaqsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;
	char	*s;

	s = (char *)str;
	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (s);
	while (i < len && str[i])
	{
		j = 0;
		while ((i + j) < len && s[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&s[i]);
			j++;
		}
		i++;
	}
	return (0);
}
