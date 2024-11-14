/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afodil-c <afodil-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:30:08 by afodil-c          #+#    #+#             */
/*   Updated: 2024/11/14 09:29:55 by afodil-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_toupper(int c);

int ft_toupper(int c)
{
    if (c >= 97 && c < 123)
        return (c - 32);
    else
        return (c);
}

/*
#include <stdio.h>

int	main(int argc, char **argv)
{
    int i = 0;
	if (argc == 2)
	{
		printf("The word is %s. \n", argv[1]);
		while (argv[1][i])
        {
            printf("With ft_toupper, argument is %s \n", ft_toupper(argv[1][i]));
            i++;
        }
	}
	else
		return (0);
}*/