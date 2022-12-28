/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uguyildi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 00:12:42 by uguyildi          #+#    #+#             */
/*   Updated: 2022/10/15 00:12:48 by uguyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_check(const char *s, char c)
{
	int	i;
	int	result;

	result = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] == '\0')
			return (result);
		while (s[i] != c && s[i] != '\0')
			i++;
		result++;
	}
	return (result);
}

static int	char_check(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		i++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**strlist;
	int		istr;

	if (!s)
		return (0);
	strlist = malloc(sizeof(char *) * (word_check(s, c) + 1));
	if (!strlist)
		return (0);
	istr = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s == '\0')
		{
			break ;
		}
		strlist[istr] = ft_substr(s, 0, char_check(s, c));
		istr++;
		s = s + char_check(s, c);
	}
	strlist[istr] = NULL;
	return (strlist);
}
