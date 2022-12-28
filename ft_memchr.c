/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uguyildi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 23:12:58 by uguyildi          #+#    #+#             */
/*   Updated: 2022/10/14 23:14:07 by uguyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*x;

	x = (const char *)s;
	i = 0;
	while (i < n)
	{
		if (x[i] == (const char)c)
		{
			return ((unsigned char *)&s[i]);
		}
		i++;
	}
	return (0);
}
