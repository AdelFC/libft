/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afodil-c <afodil-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 10:42:16 by afodil-c          #+#    #+#             */
/*   Updated: 2024/11/20 13:35:16 by afodil-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 
#include "libft.h"

static int is_in_set(char c, const char *set) {
    while (*set) {
        if (c == *set)
            return (1);
        set++;
    }
    return (0);
}

char *ft_strtrim(const char *s1, const char *set) 
{
    size_t start = 0;
    size_t end;
    char *trimmed_str;

    if (!s1 || !set)
        return (NULL);
    while (s1[start] && is_in_set(s1[start], set))
        start++;
    end = ft_strlen(s1);
    while (end > start && is_in_set(s1[end - 1], set))
        end--;
    trimmed_str = malloc(end - start + 1);
    if (!trimmed_str)
        return (NULL);
    size_t i = 0;
    while (start < end)
        trimmed_str[i++] = s1[start++];
    trimmed_str[i] = '\0';
    return (trimmed_str);
}

#include <stdio.h>

int main() 
{
    char str[] = "  abHello, World!***  ";
    char set[] = " *";
    char *result;

    result = ft_strtrim(str, set);
    if (result) 
    {
        printf("Chaîne d'origine : '%s'\n", str);
        printf("Chaîne nettoyée : '%s'\n", result);
        free(result);
    } 
    else 
    {
        printf("Erreur d'allocation mémoire.\n");
    }
}