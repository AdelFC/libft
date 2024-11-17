/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afodil-c <afodil-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:29:36 by afodil-c          #+#    #+#             */
/*   Updated: 2024/11/17 13:02:47 by afodil-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t  i;

    i = 0;
    if  (dest < src)
    {
        while (i < n)
        {
            dest[i] = src[i];
            i++;
        }
        return (dest);
    }
    else
    {
        i = n - 1;
        while (i >= 0)
        {
            dest[i] = src[i];
            i--
        }
        return ()
    }
}