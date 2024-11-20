/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afodil-c <afodil-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:29:34 by afodil-c          #+#    #+#             */
/*   Updated: 2024/11/20 10:37:33 by afodil-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*pdest;
	const char	*psrc;

	if (!dest && !src)
		return (0);
	pdest = (char *)(dest);
	psrc = (const char *)(src);
	while (n--)
	{
		*pdest++ = *psrc++;
	}
	return (dest);
}
