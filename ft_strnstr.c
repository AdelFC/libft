/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afodil-c <afodil-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:29:59 by afodil-c          #+#    #+#             */
/*   Updated: 2024/11/20 09:01:50 by afodil-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;

	i = 0;
	if (!*little)
		return ((char *)big);
	while (*big && len--)
	{
		if (*big == *little)
		{
			i = 1;
			while (*(little + i) && (*(big + i) == *(little + i))
				&& i < (int)len)
				i++;
			if (!*(little + i))
				return ((char *)big);
		}
		big++;
	}
	return (0);
}
