/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afodil-c <afodil-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:29:34 by afodil-c          #+#    #+#             */
/*   Updated: 2024/11/17 13:02:38 by afodil-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t  i;

    i = 0;
    while (src[i] && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    return (dest);
}

/* `ft_memcpy` copie les `n` premiers octets de la zone mémoire `src`
vers la zone mémoire `dst`. Retourne un pointeur vers `dst`. Les zones
mémoire ne doivent pas se chevaucher. */