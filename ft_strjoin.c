/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uguyildi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 00:16:28 by uguyildi          #+#    #+#             */
/*   Updated: 2022/10/15 00:16:32 by uguyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_fonk(char *a, size_t i, char const *s2)
{
	size_t	j;
	size_t	len;

	len = ft_strlen(s2);
	j = 0;
	while (j < len)
	{
		a[i] = s2[j];
		i++;
		j++;
	}
	a[i] = '\0';
	return (a);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	size_t	i;
	char	*a;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	i = 0;
	a = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (!a)
		return (NULL);
	while (i < len1)
	{
		a[i] = s1[i];
		i++;
	}
	a = ft_fonk(a, i, s2);
	return (a);
}
