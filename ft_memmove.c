/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:26:12 by marvin            #+#    #+#             */
/*   Updated: 2024/10/16 16:26:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void *ft_memmove(void *dest_str, const void *src_str, size_t n)
{
    const char * s;
    char * d;
    size_t i;

    s = (const char *) src_str;
    d = (char *) dest_str;
    i = 0;
    if (d > s)
    {
        while (n-- > 0)
            d[n] = s[n];
    }
    else 
    {
        while (n > i)
        {
            d[i] = s[i];
            i++;
        }
    }
    return (dest_str);
}
/*
int main() {
    char buffer[20] = "Hello, World!";

    printf("Original string: '%s'\n", buffer);

    ft_memmove(buffer + 7, buffer, 6); 

    printf("Modified string: '%s'\n", buffer);

    return 0;
}*/