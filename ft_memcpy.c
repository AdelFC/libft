/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afodil-c <afodil-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:29:34 by afodil-c          #+#    #+#             */
/*   Updated: 2024/11/18 12:09:56 by afodil-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *s1;
    unsigned char *s2;

    if (!src && !dest)
        return (0);
    s1 = (unsigned char)dest;
    s2 = (unsigned char)src;
    
}
