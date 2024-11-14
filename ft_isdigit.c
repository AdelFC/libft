/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afodil-c <afodil-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:29:23 by afodil-c          #+#    #+#             */
/*   Updated: 2024/11/14 13:22:13 by afodil-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= 48 && c < 58)
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
		if ((isdigit(argv[1][0]) != 0) &&  ft_isdigit(argv[1][0]) != 0))
		{
			printf("The first argument is a digit.\n");
			printf("The function ft_isdigit worked correctly.\n");
			return (1);
		}
		else if ((isdigit(argv[1][0]) == 0) &&  ft_isdigit(argv[1][0]) == 0))
		{
			printf("The first argument is not a digit.\n");
			printf("The function ft_isdigit worked correctly.\n");
			return (1);
		}
		else if ((isdigit(argv[1][0]) == 0) &&  ft_isdigit(argv[1][0]) != 0))
		{
			printf("The first argument is not a digit.\n");
			printf("The function ft_isdigit DIDN'T worked correctly!\n");
			return (0);
		}
		else
		{
			printf("The first argument is a digit.\n");
			printf("The function ft_isdigit DIDN'T worked correctly!\n");
			return (0);
		}
	}
	else
		return (0);
}*/