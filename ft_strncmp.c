/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uguyildi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 08:17:43 by uguyildi          #+#    #+#             */
/*   Updated: 2022/10/09 08:17:50 by uguyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*x;
	unsigned char	*y;
	size_t			i;

	x = (unsigned char *)s1;
	y = (unsigned char *)s2;
	i = 0;
	while ((x[i] != '\0' || y[i] != '\0') && i < n)
	{
		if (x[i] > y[i])
			return (x[i] - y[i]);
		else if (x[i] < y[i])
			return (x[i] - y[i]);
		i++;
	}
	return (0);
}
