/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftbzero.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uguyildi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:38:58 by uguyildi          #+#    #+#             */
/*   Updated: 2022/10/05 11:51:11 by uguyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*x;

	x = (char *)s;
	i = 0;
	if (n == 0)
		return ;
	while (i < n)
	{
		x[i] = '\0';
		i++;
	}
}