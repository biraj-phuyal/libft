/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biphuyal <biphuyal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 13:30:30 by biphuyal          #+#    #+#             */
/*   Updated: 2025/04/13 13:42:13 by biphuyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*next_node;

	next_node = malloc(sizeof(t_list));
	if (!next_node)
		return (NULL);
	next_node->content = content;
	next_node->next = NULL;
	return (next_node);
}

/* int main(void)
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
