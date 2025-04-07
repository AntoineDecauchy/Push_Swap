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
	t_node	*newnode;

	newnode = malloc(sizeof(t_node));
	if (!newnode)
		return (NULL);
	newnode->index = index;
	newnode->value = value;
	newnode->next = newnode;
	newnode->prev = newnode;
	return (newnode);
}

void	add_newnode(int index, int value, t_node *first)
{
	t_node	*newnode;
	t_node	*last;

	if (!first)
		return ;
	newnode = new_node(index, value);
	if (!newnode)
		return ;
	last = first->prev;
	last->next = newnode;
	newnode->prev = last;
	newnode->next = first;
	first->prev = newnode;
}

t_node	*remove_node(t_node **head)
{
	t_node	*node;

	if (!head || !*head)
		return (NULL);
	node = *head;
	if (node->next == node)
		*head = NULL;
	else
	{
		node->prev->next = node->next;
		node->next->prev = node->prev;
		*head = node->next;
	}
	return (node);
}

void	insert_node(t_node **head, t_node *node)
{
	t_node	*tmp_node;

	tmp_node = NULL;
	if (!*head)
	{
		node->next = node;
		node->prev = node;
		*head = node;
	}
	else
	{
		tmp_node = (*head)->prev;
		node->next = *head;
		node->prev = tmp_node;
		tmp_node->next = node;
		(*head)->prev = node;
		*head = node;
	}
}

void	update_index(t_node *head)
{
	t_node	*tmp_node;
	int		index;

	if (!head)
		return ;
	index = 0;
	tmp_node = head;
	//head->index = index;
	//index++;
	//head = head->next;
	while (head != tmp_node->prev)
	{
		head->index = index;
		index++;
		head = head->next;
	}
}
