/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 20:28:54 by marvin            #+#    #+#             */
/*   Updated: 2024/10/24 20:28:54 by marvin           ###   ########.fr       */
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

char *ft_strrchr(const char *str, int c)
{
    int i = ft_strlen(str);
    while (i >= 0)
    {
        if (str[i] == (const char)c)
            return ((char *)&str[i]);
        i--;
    }
    return (NULL);
}

int main()
{
    int c = 'a';
    char *str = "HHssafsas";
    char *s = ft_strrchr(str, c);
    printf("Last occurrence of %c in %s at %d" , c, str, s - str);
}