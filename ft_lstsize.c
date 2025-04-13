/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biphuyal <biphuyal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 16:34:44 by biphuyal          #+#    #+#             */
/*   Updated: 2025/04/12 16:46:55 by biphuyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list *current;
	int counter;

	current = lst;
	counter = 0;
	while (current && current->next != NULL)
	{
		current = current->next;
		counter++;
	}
	if (current)
		++counter;
	return (counter);
}