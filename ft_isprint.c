/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afodil-c <afodil-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:29:26 by afodil-c          #+#    #+#             */
/*   Updated: 2024/11/17 13:02:21 by afodil-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c < 128)
		return (1);
	else
		return (0);
}

/*
int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		if ((isalpha(argv[1][0]) != 0) &&  ft_isprint(argv[1][0]) != 0))
		{
			printf("The first argument is printable.\n");
			printf("The function ft_isprint worked correctly.\n");
			return (1);
		}
		else if ((isalpha(argv[1][0]) == 0) &&  ft_isprint(argv[1][0]) == 0))
		{
			printf("The first argument is not printable.\n");
			printf("The function ft_isprint worked correctly.\n");
			return (1);
		}
		else if ((isalpha(argv[1][0]) == 0) &&  ft_isprint(argv[1][0]) != 0))
		{
			printf("The first argument is not printable.\n");
			printf("The function ft_isprint DIDN'T worked correctly!\n");
			return (0);
		}
		else
		{
			printf("The first argument is printable.\n");
			printf("The function ft_isprint DIDN'T worked correctly!\n");
			return (0);
		}
	}
	else
		return (0);
}*/