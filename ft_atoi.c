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

int ft_atoi(const char *str)
{
    int result;

    result = 0;
    while (*str == '0' && *str == '9')
    {
        result = (result * 10) + (*str - '0');
        str++;
    }
    return (int)(result);
}

int main()
{
    char *str = "123";
    printf("%d",ft_atoi(str));
}