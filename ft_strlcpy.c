/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biphuyal <biphuyal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 10:32:50 by biphuyal          #+#    #+#             */
/*   Updated: 2025/04/13 09:16:35 by biphuyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

unsigned int ft_strlcpy(char *dest, const char *src, unsigned int n)
{
    unsigned int s_len;
    unsigned int i;

    s_len = 0;
    i = 0;
    while (src[s_len])
        s_len++;
    if (n == 0)
        return (s_len);
    while (i < n - 1 && src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (s_len);
}
/* 
int main() {
    char dest[20] = "Hello, ";
    const char *src = "World!";
    unsigned int size = sizeof(dest);

    unsigned int result = ft_strlcpy(dest, src, size);

    printf("Resulting string: %s\n", dest);
    printf("Length of the resulting string: %u\n", result);
    
}
 */