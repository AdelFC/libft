/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afodil-c <afodil-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:29:54 by afodil-c          #+#    #+#             */
/*   Updated: 2024/11/17 13:03:37 by afodil-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlen(const char *s)
{
    size_t i;

    i = 0;
    while (s[i])
    {
      i++;
    }
    return (i);
}

/* `ft_strlen` calcule et retourne la longueur de la chaîne `s`, 
sans compter le caractère nul final. */ 