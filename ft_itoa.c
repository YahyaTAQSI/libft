/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaqsi <ytaqsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:20:53 by ytaqsi            #+#    #+#             */
/*   Updated: 2022/10/24 12:17:41 by ytaqsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	intl(long n)
{
	int	i;

	i = 0;
	if (n <= 0)
	{
		i++;
		n = -n;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*p;
	long	ln;

	i = intl((long)n);
	ln = (long)n;
	p = (char *)malloc((i + 1) * sizeof(char));
	if (!p)
		return (NULL);
	p[i] = '\0';
	i--;
	if (ln < 0)
		ln = -ln;
	while (i > 0)
	{
		p[i] = ln % 10 + '0';
		ln /= 10;
		i--;
	}
	if (n < 0)
		p[i] = '-';
	else if (n >= 0)
		p[i] = ln + '0';
	return (p);
}
