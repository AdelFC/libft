/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afodil-c <afodil-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:29:57 by afodil-c          #+#    #+#             */
/*   Updated: 2024/11/14 14:20:11 by afodil-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp (const char *s1, const char *s2, size_t n);

int ft_strncmp (const char *s1, const char *s2, size_t n)
{
    size_t i;

    i = 0;
    while (s1[i] && s1[i] == s2[i] && i < n)
    {
        
    }
}