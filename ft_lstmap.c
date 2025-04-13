/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biphuyal <biphuyal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 18:37:54 by biphuyal          #+#    #+#             */
/*   Updated: 2025/04/12 20:23:57 by biphuyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*curr;
	t_list	*new;
	void	*tmp;

	if (!lst || !f || !del)
		return (NULL);
	while (curr)
	{
		new = ft_lstnew(new);
		curr = curr->next;
	}
	return (new);
}
