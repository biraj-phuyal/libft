/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biphuyal <biphuyal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 18:36:30 by biphuyal          #+#    #+#             */
/*   Updated: 2025/03/03 18:36:31 by biphuyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ft_atoi(const char *str)
{
    int result;
    int sign;
    int sign_count;

    result = 0;
    sign = 1;
    sign_count = 0;
    while((*str == 32) || (*str >= 9 && *str <= 13))
        str++;
    while(*str == '-' || *str == '+')
    {
        if(*str == '-')
            sign = -1;
        str++;
        sign_count++;
        if(sign_count > 1)
            return (0);
    }
    while (*str >= '0' && *str <= '9')
    {
        result = (result * 10) + (*str - '0');
        str++;
    }
    return (int)(result);
}
/* 
int main()
{
    char *str = "123";
    printf("%d",ft_atoi(str));
} */