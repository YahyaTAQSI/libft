/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaqsi <ytaqsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 17:14:48 by ytaqsi            #+#    #+#             */
/*   Updated: 2022/10/18 15:02:12 by ytaqsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		l;
	char	*p;

	if (!s || !f)
		return (NULL);
	i = -1;
	l = 0;
	while (s[l])
		l++;
	p = (char *)malloc((l + 1) * sizeof(char));
	if (!p)
		return (NULL);
	while (++i < l)
		p[i] = f(i, s[i]);
	p[i] = '\0';
	return (p);
}
