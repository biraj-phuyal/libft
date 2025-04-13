/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biphuyal <biphuyal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 13:30:30 by biphuyal          #+#    #+#             */
/*   Updated: 2025/04/13 11:41:21 by biphuyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>
#include <fcntl.h>

t_list *ft_lstnew(void *content)
{
    t_list *next_node;
    
    next_node= malloc(sizeof(t_list));
    if (!next_node)
        return (NULL);
    next_node -> content = content;
    next_node -> next = NULL;
    return (next_node);
}

/* int main(void)
{
    t_list *node = ft_lstnew("Hello, world!");
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
