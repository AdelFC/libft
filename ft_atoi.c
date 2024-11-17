/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afodil-c <afodil-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:29:01 by afodil-c          #+#    #+#             */
/*   Updated: 2024/11/17 15:05:32 by afodil-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	result;
	int	sign;
	int	i;

	i = 0;
	result = 0;
	sign = 1;
	if (!nptr)
		return (0);
	if (nptr[i] == 32)
		i++;
	if (nptr[i] == '-' || nptr[i] == '+' )
	{
		if (nptr[i] == '-')
			sign *= -1;
		i++;
	}
	while (nptr[i] > 47 && nptr[i] < 58)
	{
		result = result * 10 + nptr[i] - '0';
		i++;
	}
	return (sign * result);
}

/*int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("The integer is %d. \n", atoi(argv[1]));
		printf("With ft_atoi, integer is %d printable, function works. \n",
			ft_atoi(argv[1]));
	}
	else
		return (0);
}*/