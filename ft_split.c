/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afodil-c <afodil-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 10:42:00 by afodil-c          #+#    #+#             */
/*   Updated: 2024/11/22 11:53:22 by afodil-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	strlen_split(const char *s, char c)
{
	int	j;

	j = 0;
	while (*s && *s != c)
	{
		s++;
		j++;
	}
	return (j);
}

static int	count_word(const char *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		if ((*s != c && (*(s + 1) == c || *(s + 1) == '\0')))
			i++;
		s++;
	}
	return (i);
}

char	**ft_split(const char *s, char c)
{
	char	**result;
	int		i;
	int		k;

	result = (char **)malloc((count_word(s, c) + 1) * sizeof(char *));
	if (!result || !s)
		return (0);
	i = 0;
	k = 0;
	while (*s == c && *s)
		s++;
	while (*s)
	{
		*(result + k) = (char *)malloc((strlen_split(s, c) + 1) * sizeof(char));
		if (!*(result + k))
			return (0);
		i = 0;
		while (*s && *s != c)
			*(*(result + k) + i++) = *s++;
		*(*(result + k++) + i) = 0;
		while (*s == c && *s)
			s++;
	}
	return (*(result + k) = 0, result);
}
