/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biphuyal <biphuyal@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 13:30:30 by biphuyal          #+#    #+#             */
/*   Updated: 2025/11/21 16:34:49 by biphuyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
/* 
int main(void)
{
	t_list	*node;

    node = ft_lstnew("Hello, world!");
    if (!node)
    {
        printf("Failed to create node\n");
        return (1);
    }
    
    printf("Node content: %s\n", (char *)node->content);
    printf("Next pointer is null: %d\n", node->next == NULL);
    free(node);
    
    return (0);
}
 */
