/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biphuyal <biphuyal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 18:36:45 by biphuyal          #+#    #+#             */
/*   Updated: 2025/04/13 08:06:07 by biphuyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>

void *ft_calloc(size_t nitems, size_t size)
{
    size_t total_size;
    void *ptr;
    unsigned char *byte_ptr;
    size_t i;

    if (nitems != 0 && size > SIZE_MAX / nitems)
        return NULL;
    total_size = nitems * size;
    ptr = malloc(total_size);
    if (!ptr)
        return NULL;
    byte_ptr = (unsigned char *)ptr;
    i = 0;
    while (i < total_size)
    {
        byte_ptr[i] = 0;
        i++;
    }
    return (ptr);
}

/* 
int main()
{
    size_t i = 1;
    size_t size = 5;
    int *ptr = (int *)ft_calloc(i, size);

    if (ptr != NULL) {
        printf("Memory allocated successfully. Address: %p\n", (void *)ptr);
        free(ptr);
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}
 */