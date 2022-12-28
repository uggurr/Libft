/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uguyildi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 00:02:11 by uguyildi          #+#    #+#             */
/*   Updated: 2022/10/15 00:02:14 by uguyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int			i;
	char		*x;
	const char	*y;

	x = dst;
	y = src;
	i = 0;
	if (!dst && !src)
		return (0);
	while (i < n)
	{
		x[i] = y[i];
		i++;
	}
	return (x);
}
