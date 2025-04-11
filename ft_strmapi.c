/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biphuyal <biphuyal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 11:57:21 by biphuyal          #+#    #+#             */
/*   Updated: 2025/04/11 15:02:08 by biphuyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>

int length(char const *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *str;
    unsigned int j;

    if (!s || !f)
        return NULL;
    j = 0;
    str = malloc(length(s) + 1);
    if (!str)
        return (NULL);
    while (s[j])
    {
        str[j] = f(j, s[j]);
        j++;
    }
    str[j] = '\0';
    return (str);
}

/* 
char my_func(unsigned int i, char c)
{
    if (i % 2 == 0)
        return c - 32;
    return c;
}

int main()
{
    const char *input = "hello world";
    char *result;

    result = ft_strmapi(input, my_func);
    
    if (result)
    {
        printf("Original: %s\n", input);
        printf("Transformed: %s\n", result);
        free(result);
    }
    else
        printf("Memory allocation failed!\n");
    return 0;
}
*/
