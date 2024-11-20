/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afodil-c <afodil-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:29:51 by afodil-c          #+#    #+#             */
/*   Updated: 2024/11/20 09:09:48 by afodil-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t siz)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(src);
	i = 0;
	if (siz > 0)
	{
		siz--;
		while (*src && siz)
		{
			*(dst + i) = *(src + i);
			i++;
			siz--;
		}
		*(dst + i) = '\0';
	}
	return (len);
}
