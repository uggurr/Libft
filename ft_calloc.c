/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uguyildi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 22:29:44 by uguyildi          #+#    #+#             */
/*   Updated: 2022/10/14 22:29:46 by uguyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	size_t	x;
	char	*a;

	x = count * size;
	a = (char *)malloc(x * sizeof(char));
	if (!a)
		return (NULL);
	i = 0;
	while (a[i] != '\0')
	{
		a[i] = 0;
		i++;
	}
	return (a);
}
