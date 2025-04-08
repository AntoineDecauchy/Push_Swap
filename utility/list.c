/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adecauch <adecauch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 02:25:29 by adecauch          #+#    #+#             */
/*   Updated: 2025/04/08 02:25:31 by adecauch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	update_index(t_node *head)
{
	t_node	*tmp_node;
	int		index;

	if (!head)
		return ;
	tmp_node = head;
	index = 0;
	head->index = index++;
	while (head->next != tmp_node)
	{
		head = head->next;
		head->index = index++;
	}
}

int	size_list(t_node *head)
{
	t_node	*tmp_node;
	int		size;

	if (!head)
		return (0);
	tmp_node = head;
	size = 1;
	tmp_node = tmp_node->next;
	while (tmp_node != head)
	{
		size++;
		tmp_node = tmp_node->next;
	}
	return (size);
}

void	free_list(t_node *head)
{
	t_node	*tmp;
	t_node	*next;

	if (!head)
		return ;
	tmp = head->next;
	while (tmp != head)
	{
		next = tmp->next;
		free(tmp);
		tmp = next;
	}
	free(head);
}
