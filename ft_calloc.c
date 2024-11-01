/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 20:35:45 by marvin            #+#    #+#             */
/*   Updated: 2024/10/24 20:35:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

void *calloc(size_t nitems, size_t size)
{
    int *new;
    int *s;

    new = (int *)malloc(sizeof(nitems));
    s = new;
    if (*s)
    {
        while (size--)
        {
            s = 0;
            s++;
        }
        return (void *)s;
    }
    return NULL;    
}

int main()
{
    size_t i = 8;
    size_t size = 3;
    printf("%d", calloc(i, size));
}