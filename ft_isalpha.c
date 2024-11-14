/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afodil-c <afodil-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:29:14 by afodil-c          #+#    #+#             */
/*   Updated: 2024/11/14 11:16:36 by afodil-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(int c)
{
    if ((c > 64 && c < 91) || (c > 96 && c < 123))
        return(1);
    else
        return(0);
}

/*
#include <ctype.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		if ((isalpha(argv[1][0]) != 0) && (ft_isalpha(argv[1][0]) != 0))
		{
			printf("The first argument is an alphabetic character.\n");
            printf("The function ft_isalpha worked correctly.\n");
			return (1);
		}
        else if ((isalpha(argv[1][0]) == 0) && (ft_isalpha(argv[1][0]) == 0))
        {
            printf("The first argument is not an alphabetic character.\n");
            printf("The function ft_isalpha worked correctly.\n");
			return (1);
        }
        else if ((isalpha(argv[1][0]) == 0) && (ft_isalpha(argv[1][0]) != 0))
        {
            printf("The first argument is not an alphabetic character.\n");
            printf("The function ft_isalpha DIDN'T worked correctly!\n");
			return (0);
        }
		else
		{
			printf("The first argument is an alphabetic character.\n");
            printf("The function ft_isalpha DIDN'T worked correctly!\n");
			return (0);
		}
	}
	else
		return (0);
}*/