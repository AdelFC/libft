/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afodil-c <afodil-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:29:28 by afodil-c          #+#    #+#             */
/*   Updated: 2024/11/17 13:02:28 by afodil-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (s[i] == c)
			return (s[i]);
		i++;
	}
	return (0);
}

/* `ft_memchr` recherche la première occurrence de l'octet `c` dans 
les `n` premiers octets de la zone mémoire pointée par `s`. Retourne 
un pointeur vers l'octet correspondant, ou `NULL` si `c` n'est pas trouvé. */