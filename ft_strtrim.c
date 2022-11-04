/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaqsi <ytaqsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:10:15 by ytaqsi            #+#    #+#             */
/*   Updated: 2022/10/25 10:50:50 by ytaqsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	rindex(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (i >= 0)
	{
		if (s1[i] != set[j] && set[j] != '\0')
			j++;
		else if (s1[i] == set[j])
		{
			j = 0;
			i--;
		}
		else
			return (i);
	}
	return (i);
}

static int	lindex(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		if (s1[i] != set[j] && set[j] != '\0')
			j++;
		else if (s1[i] == set[j])
		{
			j = 0;
			i++;
		}
		else
			return (i);
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		li;
	int		ri;
	int		l;
	char	*p;

	if (!s1)
		return (NULL);
	li = lindex(s1, set);
	ri = rindex(s1, set);
	l = ri - li + 1;
	if (l < 0)
		l = 0;
	p = (char *)malloc((l + 1) * sizeof(char));
	if (!p)
		return (NULL);
	l = 0;
	while (li <= ri)
		p[l++] = s1[li++];
	p[l] = '\0';
	return (p);
}
