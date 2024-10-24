/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 20:28:41 by marvin            #+#    #+#             */
/*   Updated: 2024/10/24 20:28:41 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void    *ft_memchr(const void *str, int c, size_t n)
{
    size_t i;
    const unsigned char *s;

    i = 0;
    s = str;
    if (c == '\0')
        return (char *)str;
    while (i < n)
    {
        if (s[i] == (char)c)
            return (void *)(s + i);
        i++;
    }
    return (NULL);
}