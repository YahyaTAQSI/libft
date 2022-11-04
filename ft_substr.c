/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaqsi <ytaqsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:56:02 by ytaqsi            #+#    #+#             */
/*   Updated: 2022/10/25 10:50:01 by ytaqsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*p;
	size_t			i;
	unsigned int	ss;

	if (!s)
		return (NULL);
	ss = ft_strlen(s);
	if (start > ss)
		len = 0;
	i = 0;
	ss = start;
	while (s[ss] && i < len)
	{
		i++;
		ss++;
	}
	p = (char *)malloc((i + 1) * sizeof(char));
	if (!p)
		return (NULL);
	i = 0;
	ss = start;
	while (s[ss] && i < len)
		p[i++] = s[ss++];
	p[i] = '\0';
	return (p);
}
