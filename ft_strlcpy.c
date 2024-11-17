/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afodil-c <afodil-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:29:51 by afodil-c          #+#    #+#             */
/*   Updated: 2024/11/17 15:30:20 by afodil-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t siz)
{
	size_t i;
	size_t len;

	len = ft_strlen(src);
	if (siz > 0)
	{
		siz--;
		while (*src && siz)
		{
			dst[i] = src[i];
            i++;
			siz--;
		}
		dst[i] = '\0';
	}
	return (len);
}

/* `ft_strlcpy` copie jusqu'à `dst siz - 1` caractères de la chaîne `src`
vers `dst`, en ajoutant un caractère nul final.  retourne la longueur de
`src`, permettant de déterminer si toute la chaîne a été copiée. Si `dstsize`
 est trop petit, `dst` sera tronqué. */

#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	char	dest[] = "Ecole 42";
	char	src[] = "Alors la source";
	char	dest2[] = "Ecole 42";
	char	src2[] = "Alors la source";

	printf("DEST initial		: %s\n", dest);
	printf("SRC initial		: %s\n", src);
	printf("DEST post-ft_strlcpy	: %zu\n", ft_strlcpy(dest, src, 10));
	printf("OG strlcpy 		: %zu\n", strlcpy(dest2, src2, 10));
	return (0);
}