/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biphuyal <biphuyal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 10:34:03 by biphuyal          #+#    #+#             */
/*   Updated: 2025/04/11 19:23:08 by biphuyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int ft_toupper(int ch)
{
    if (ch >= 'a' && ch <= 'z')
        return (ch - 32);
    return (ch);
}
/* 
int main ()
{
    int c = '9';
    printf("%c", ft_touuper(c));
}
 */