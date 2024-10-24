/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 20:28:39 by marvin            #+#    #+#             */
/*   Updated: 2024/10/24 20:28:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ft_memcmp(const void *str1, const void *str2, size_t n)
{
    const unsigned char *s1;
    const unsigned char *s2;

    s1 = str1;
    s2 = str2;
    while(n--)
    {
        if (*s1 != *s2)
            return(*s2 - *s1);
        s1++;
        s2++;
    }
    return (0);
}

int main()
{
    const char *str = "Heklo";
    const char *str2 = "Hello"; 
    const int i = ft_memcmp(str, str2, 7);
    printf("%d", i);
}