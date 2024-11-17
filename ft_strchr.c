/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afodil-c <afodil-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:29:43 by afodil-c          #+#    #+#             */
/*   Updated: 2024/11/17 13:03:18 by afodil-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    int	i;

	while (s[i] != c)
		i++;
	return 
}

/*
int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		strrchr(argv)
    }
    else
		return (0);
}*/

/* `ft_strchr` recherche la première occurrence du caractère `c` dans la chaîne `s`.
Retourne un pointeur vers le caractère correspondant dans `s`, ou `NULL` si `c` absent. */