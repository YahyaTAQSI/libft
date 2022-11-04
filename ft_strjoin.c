/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaqsi <ytaqsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:21:57 by ytaqsi            #+#    #+#             */
/*   Updated: 2022/10/22 11:38:49 by ytaqsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		is1;
	int		is2;
	char	*p;

	if (!s1 || !s2)
		return (NULL);
	is1 = ft_strlen(s1);
	is2 = ft_strlen(s2);
	p = (char *)malloc((is1 + is2 + 1) * sizeof(char));
	if (!p)
		return (NULL);
	is1 = 0;
	is2 = 0;
	while (s1[is1])
	{
		p[is1] = s1[is1];
		is1++;
	}
	while (s2[is2])
		p[is1++] = s2[is2++];
	p[is1] = '\0';
	return (p);
}
