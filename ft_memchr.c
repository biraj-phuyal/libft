/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biphuyal <biphuyal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 10:31:39 by biphuyal          #+#    #+#             */
/*   Updated: 2025/04/13 14:26:38 by biphuyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t						i;
	const unsigned char			*string;

	i = 0;
	string = (const unsigned char *)s;
	while (i < n)
	{
		if (string[i] == (unsigned char)c)
			return ((void *)(string + i));
		i++;
	}
	return (NULL);
}
/* 
int main(void)
{
	const char str[] = "Hello, world!";
	char target = 'o';

	char *result = (char *)ft_memchr(str, target, strlen(str));

	if (result != NULL)
		printf("Character '%c' found at position: %ld\n", target, result - str);
	else
		printf("Character '%c' not found.\n", target);

	return 0;
}
*/
