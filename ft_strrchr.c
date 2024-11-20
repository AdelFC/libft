/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afodil-c <afodil-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:30:02 by afodil-c          #+#    #+#             */
/*   Updated: 2024/11/20 08:48:40 by afodil-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	int		i;

	ptr = 0;
	i = 0;
	while (*(s + i))
	{
		if (*(s + i) == c)
			ptr = (char *)(s + i);
		i++;
	}
	if (c == '\0')
		ptr = (char *)(s + i);
	return (ptr);
}
