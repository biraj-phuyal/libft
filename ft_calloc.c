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
    char *new;
    char *s;

    new = (int *)malloc(ft_strlen(nitems));
    s = new;
    while (size-- && *s)
    {
        nitems = 0;
        s = nitems;
        s++;
    }
    return (int)(new);
}

int main()
{
    size_t i = 7;
    size_t size = 3;
    printf(" %d %i ", calloc(i, size));
}