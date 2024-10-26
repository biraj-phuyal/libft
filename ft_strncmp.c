/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 20:28:33 by marvin            #+#    #+#             */
/*   Updated: 2024/10/24 20:28:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ft_strncmp(const char *dest, const char *src, size_t n)
{
    size_t i;

    i = 0;
    while (src[i] && dest[i] && i < n)
    {
        if (dest[i] != src[i])
        {
            return ((unsigned char)dest[i] - (unsigned char)src[i]);
        }
        i++;
    }
    if (i < n)
        return ((unsigned char)dest[i] - (unsigned char)src[i]);
    return (0);
}

int main()
{
    char *str = "LOLOLOL";
    const char *dest = "LOK";
    int s = ft_strncmp(dest, str, 3);
    //printf("Last occurrence of %c in %s at %d" , dest, str, s - str);
}