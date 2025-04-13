/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biphuyal <biphuyal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 10:33:38 by biphuyal          #+#    #+#             */
/*   Updated: 2025/04/13 08:37:47 by biphuyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
/* 
int main()
{
    int c = 'a';
    char *str = "HHssafsas";
    char *s = ft_strrchr(str, c);
    printf("Last occurrence of %c in %s at %d" , c, str, s - str);
} */