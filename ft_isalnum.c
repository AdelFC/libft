/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afodil-c <afodil-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:29:11 by afodil-c          #+#    #+#             */
/*   Updated: 2024/11/14 13:21:06 by afodil-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123) || (c > 47 && c < 58))
		return (1);
	else
		return (0);
}

/*
#include <ctype.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		if ((isalnum(argv[1][0]) != 0) &&  (ft_isalnum(argv[1][0]) != 0))
		{
			printf("The first argument is an alphanumeric character.\n");
			printf("The function ft_isalnum worked correctly.\n");
			return (1);
		}
		else if ((isalnum(argv[1][0]) == 0) &&  (ft_isalnum(argv[1][0]) == 0))
		{
			printf("The first argument is not an alphanumeric character.\n");
			printf("The function ft_isalnum worked correctly.\n");
			return (1);
		}
		else if ((isalnum(argv[1][0]) == 0) &&  (ft_isalnum(argv[1][0]) != 0))
		{
			printf("The first argument is not an alphanumeric character.\n");
			printf("The function ft_isalnum DIDN'T worked correctly!\n");
			return (0);
		}
		else
		{
			printf("The first argument is an an alphanumeric character.\n");
			printf("The function ft_isalnum DIDN'T worked correctly!\n");
			return (0);
		}
	}
	else
		return (0);
}*/