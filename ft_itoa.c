/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biphuyal <biphuyal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 14:36:17 by biphuyal          #+#    #+#             */
/*   Updated: 2025/04/10 20:16:39 by biphuyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>

int get_size_of_int(int n)
{
	long	nb;
	int size;

	nb = n;
	if (n < 0)
		nb *= -1;
	size = 0;
	while(nb > 0)
	{
		size += 1;
		nb /= 10;
	}
	return (size);
}

char *ft_itoa(int n)
{
	char *string;
	long	nb;
	int size;

	size = get_size_of_int(n);
	if (n < 0)
		++size;
	string = malloc(sizeof(char) * (size + 1));
	if (!string)
		return (NULL);
	string[size] = '\0';
	nb = n;
	if (nb < 0)
	{
		string[0] = '-';
		nb *= -1;
	}
	if (nb == 0)
	{
		string[0] = '0';
		string[1] = '\0';
	}
	while (nb != 0)
	{
		string[--size] = '0' + (nb % 10);
		nb /= 10;
	}
	return (string);
}

int main()
{
	//printf("%d", get_size_of_int(100000));
	printf("INT MAX -> %s\n", ft_itoa(2147483647));
	printf("ZARO -> %s\n", ft_itoa(0));
	printf("INT MIN -> %s\n", ft_itoa(-2147483648));
}
