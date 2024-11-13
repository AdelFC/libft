/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afodil-c <afodil-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:29:43 by afodil-c          #+#    #+#             */
/*   Updated: 2024/11/13 11:44:48 by afodil-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strchr(const char *s, int c);

char    *ft_strchr(const char *s, int c)
{
    
}

#include <stdio.h>
#include <string.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("The integer is %d. \n", atoi(argv[1]));
        printf("With ft_atoi, integer is %d printable, function works. \n", ft_atoi(argv[1]));
    }
    else
		return (0);
}

/* `ft_strchr` recherche la première occurrence du caractère `c` dans la chaîne `s`.
Retourne un pointeur vers le caractère correspondant dans `s`, ou `NULL` si `c` absent. */