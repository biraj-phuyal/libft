/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biphuyal <biphuyal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 10:31:39 by biphuyal          #+#    #+#             */
/*   Updated: 2025/04/05 10:31:40 by biphuyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void    *ft_memchr(const void *str, int c, size_t n)
{
    size_t i;
    unsigned char *s;

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