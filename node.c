/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adecauch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 21:51:41 by adecauch          #+#    #+#             */
/*   Updated: 2025/02/18 22:15:10 by adecauch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*new_node(int index, int value)
{
	t_node	*newNode;

	newnode = malloc(sizeof(t_node));
	if (!newnode)
		return (NULL);
	newnode->index = index;
	newnode->value = value;
	newnode->next = newnode;
	newnode->prev = newnode;
	return (newnode);
}

//void	insert_node_end(node **
