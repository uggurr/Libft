/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uguyildi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 18:15:57 by uguyildi          #+#    #+#             */
/*   Updated: 2022/10/18 18:16:01 by uguyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	len(long nb)
{
	int	l;

	l = 0;
	if (nb == 0)
		l = 1;
	else if (nb < 0)
	{
		nb = -nb;
		l++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		l++;
	}
	return (l);
}

char	*ft_itoa(int n)
{
	long	x;
	char	*a;
	int		i;

	x = n;
	i = len(x);
	a = (char *)malloc (sizeof(char) * (len(x) + 1));
	if (!a)
		return (NULL);
	a[i--] = '\0';
	if (x == 0)
		a[0] = '0';
	if (x < 0)
	{
		a[0] = '-';
		x = -x;
	}
	while (x > 0)
	{
		a[i--] = 48 + (x % 10);
		x = x / 10;
	}
	return (a);
}
